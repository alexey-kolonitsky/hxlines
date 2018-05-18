package core;

import core.BreadthFirst;
import StaticConfig;

/**
 * Array of GameFild's positions
 **/
typedef Line = Array<Int>;

/**
 * GameField represent game board as an array of integer values. Each value identiry
 * different type of chips on the field.
 **/
class GameField {

    private var _gameField:Array<Int> = null;
    private var _freeFieldIndex:Array<Int> = null;
    private var _distance:Array<Int> = null;

    private var _turnChipCount:Int = StaticConfig.TURN_CHIP_NUMBER;
    private var _lineMinLength:Int = StaticConfig.LINE_LENGTH;
    private var _widthLimit:Int = StaticConfig.BOARD_WIDTH;
    private var _heightLimit:Int = StaticConfig.BOARD_HEIGHT;
    private var _fieldsNumber:Int = StaticConfig.BOARD_WIDTH * StaticConfig.BOARD_HEIGHT;
    private var _emptyFieldValue:Int = StaticConfig.EMPTY_CELL_CODE;

        /**
     * GameField is full means that it don't have less free fiels then required
     * in one turn.
     **/
    public function isFull():Bool {
        return _freeFieldIndex.length < _turnChipCount;
    }

    /**
     * GameField is empty means that all fields are empty and game field don't
     * have any cheap.
     **/
    public function isEmpty():Bool {
        return _gameField.length == _freeFieldIndex.length;
    }

    public function clearStartIndex() {
        _startIndex = -1;
        _path = null;
        _distance = null;
    }

    public function clearEndIndex() {
        _endIndex = -1;
        _path = null;
    }


    //-----------------------------
    // fieldValues
    //-----------------------------

    public var fieldValues:Array<Int>;

    //-----------------------------
    // path
    //-----------------------------

    private var _path:Array<Int>;
    public var path(get,never):Array<Int>;
    public function get_path():Array<Int> {
        return _path;
    }

    //-----------------------------
    // startIndex
    //-----------------------------

    /**
     * After selecting start index fields updated with availability
     * indexes.
     */
    public var startIndex(get,set):Int;
    private var _startIndex:Int = -1;
    public function get_startIndex():Int {
        return _startIndex;
    }

    public function set_startIndex(value:Int) {
        if (value >= 0 && value < _fieldsNumber && _gameField[value] != _emptyFieldValue) {
            _startIndex = value;
            _path = null;
            _distance = BreadthFirst.bfs(_gameField, startIndex, startIndex, getAvailableNeighbors);
            trace('GameField set_startIndex ${_startIndex} ${_distance}');
        }
        return _startIndex;
    }


    //-----------------------------
    // endIndex
    //-----------------------------
    private var _endIndex:Int = -1;
    public var endIndex(get,set):Int;

    /**
     * endIndex is a parameter indicate approximate distanation cell. This
     * property can be changed only if startIndex is setted.
     */
    public function get_endIndex():Int {
        return _endIndex;
    }

    public function set_endIndex(value:Int) {
        var isReachable = _distance != null && _distance[value] < _fieldsNumber;
        if (value >= 0 && value < _fieldsNumber && startIndex != -1 && isReachable) {
            _endIndex = value;
            _path = BreadthFirst.bfsPath(_gameField, _distance, startIndex, endIndex, getAvailableNeighbors);
            trace('GameField set_endIndex ${_endIndex} ${_path}}');
        }
        return _endIndex;
    }

    //-----------------------------
    // Constructor
    //-----------------------------

    /**
     * Create new GameField and initilize it with exists data.
     * @param gameFilds
     */
    public function new(gameFilds:Array<Int> = null) {
        if (gameFilds == null)
            gameFilds = [ for(i in 0..._fieldsNumber) _emptyFieldValue ];
        _gameField = gameFilds;
        initFreeCells();
    }

    /**
     * Put random values to random places on the game fields.
     */
    public function addRandomValues():Array<Int> {
        for (i in 0..._turnChipCount) {
            var randomFiledValue = randomItem(fieldValues);
            var randomField = _freeFieldIndex[i];
            _gameField[randomField] = randomFiledValue;
        }
        return _freeFieldIndex.splice(0, _turnChipCount);
    }

    /**
     * Move step finish move. This method move selected ship if it
     * distanation available.
     *
     * @param position id of destination cell on the board.
     * @return true if filed at start possition moved to `possition`
     */
    public function move(position:Int):Bool {
        var isEmpty = _gameField[position] == _emptyFieldValue;
        if (startIndex == -1 && isEmpty) {
            return false;
        } else if (startIndex == -1 && !isEmpty) {
            trace('GameField move(${position}), set startIndex position');
            startIndex = position;
            return false;
        } else if (startIndex != -1 && !isEmpty) { // select different field
            trace('GameField move(${position}), change startIndex');
            startIndex = position;
            return false;
        } else /* (startIndex != -1 && isEmpty)*/ {
            if (_distance[position] > _fieldsNumber) { // unavailable field
                trace('GameField move(${position}), destination cant be reached');
                return false;
            }
            // mark start position as free and swap field at start position with finish
            // position
            trace('GameField move(${position})');
            var i:Int = _freeFieldIndex.indexOf(position);
            _freeFieldIndex[i] = startIndex;
            _gameField[position] = _gameField[startIndex];
            _gameField[startIndex] = _emptyFieldValue;
            // reset path
            _startIndex = -1;
            _endIndex = -1;
            _path = null;
            return true;
        }
    }

    /**
     * Set empty value at line positions and mark this fields as "free"
     */
    public function removeLine(line:Line) {
        for (index in line) {
            var n = _freeFieldIndex.length;
            var randomIndex:Int = (n <2) ? 0 : Math.floor(Math.random() * n);
            _freeFieldIndex.insert(randomIndex, index);
            _gameField[index] = _emptyFieldValue;
        }
    }

    /**
     *  Search lines in the board and remove it. Searched lines must contain
     *  chip from startIndexes array.
     *
     *  @param fieldPositions is an array with ids of new added chips. This
     *  method check lines which include chips from this array.
     *
     *  @return full lines.
     */
    public function findCompleteLines(position:Int):Array<Line> {
        var lines:Array<Line> = [];
        var line:Line = null;
        var colIndex:Int = position % _widthLimit;
        var rowIndex:Int = Math.floor((position - colIndex) / _widthLimit);
        var fieldValue:Int = _gameField[position];
        // search vertical line
        line = findLine(colIndex, 0, 0, 1, fieldValue);
        if (line != null)
            lines.push(line);
        // search vertical line
        line = findLine(0, rowIndex, 1, 0, fieldValue);
        if (line != null)
            lines.push(line);
        // dioganal line
        var d:Int = rowIndex < colIndex ? rowIndex : colIndex;
        line = findLine(colIndex - d, rowIndex - d,  1, 1, fieldValue);
        if (line != null)
            lines.push(line);
        // dioganal line
        var right:Int = _widthLimit - 1 - colIndex;
        d = rowIndex < right ? rowIndex : right;
        line = findLine(colIndex + d, rowIndex - d, -1, 1, fieldValue);
        if (line != null)
            lines.push(line);
        return lines;
    }

    private function findLine(colStartIndex:Int, rowStartIndex:Int, colIncrement:Int, rowIncrement:Int, fieldValue:Int):Line {
        var result:Line = [];
        var colIndex:Int = colStartIndex;
        var rowIndex:Int = rowStartIndex;
        while (colIndex < _widthLimit && rowIndex < _heightLimit && colIndex >= 0 && rowIndex >= 0) {
            if (valueAt(colIndex, rowIndex) == fieldValue) {
                result.push(rowIndex * _widthLimit + colIndex);
            } else if (result.length >= _lineMinLength) {
                return result;
            } else {
                result = [];
            }
            colIndex += colIncrement;
            rowIndex += rowIncrement;
        }
        return result.length >= _lineMinLength ? result : null;
    }

    private function valueAt(colIndex:Int, rowIndex:Int):Int {
        var index:Int = rowIndex * _widthLimit + colIndex;
        return _gameField[index];
    }

    /**
     * Callback method for Breadth-first search (BFS) method. Used for find
     * neighbors of passed cell.
     *
     * @param source source is an whell graph processed by BFS.
     * @param index is a identifier of note which currently processed by
     * BFS.
     *
     * @return Vector with node's identifiers, which is a neighbor of index
     * node.
     */
    private function getAvailableNeighbors(source:Dynamic, index:Int):Array<Int> {
        var result:Array<Int> = new Array<Int>();

        var emptyChipType:Int = StaticConfig.EMPTY_CELL_CODE;
        var colIndex:Int = cast index % StaticConfig.BOARD_WIDTH;
        var rowIndex:Int = cast Math.floor((index - colIndex) / StaticConfig.BOARD_WIDTH);

        if (rowIndex != 0 && valueAt(colIndex, rowIndex - 1) == emptyChipType)
            result.push(index - StaticConfig.BOARD_WIDTH);
        if (colIndex != StaticConfig.BOARD_WIDTH - 1 && valueAt(colIndex + 1, rowIndex) == emptyChipType)
            result.push(index + 1);
        if (rowIndex != StaticConfig.BOARD_HEIGHT - 1 && valueAt(colIndex, rowIndex + 1) == emptyChipType)
            result.push(index + StaticConfig.BOARD_WIDTH);
        if (colIndex != 0 && valueAt(colIndex - 1, rowIndex) == emptyChipType)
            result.push(index - 1);

        return result;
    }

    private function initFreeCells() {
        _freeFieldIndex = [];
        for (i in 0..._gameField.length) {
            if (_gameField[i] == 0) {
                _freeFieldIndex.push(i);
            }
        }
        shuffle(_freeFieldIndex);
    }

    /** get item at random position */
    private static function randomItem<T>(source:Array<T>):T {
        if (source == null)
            return null;
        var n:Int = source.length;
        var randomIndex:Int = (n < 2) ? 0 : Math.floor(Math.random() * n);
        return source[randomIndex];
    }

    /** shuffle all items in array */
    private static function shuffle<T>(source:Array<T>) {
        if (source == null)
            return;
        var n:Int = source.length;
        if (n < 2)
            return;
        for(i in 0...n) {
            var randomIndex:Int = Math.floor(Math.random() * n);
            var tmp = source[i];
            source[i] = source[randomIndex];
            source[randomIndex] = tmp;
        }
    }
}
