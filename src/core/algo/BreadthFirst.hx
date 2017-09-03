package core.algo;

/**
 * Breadth-first search alghorithm.
 *
 * This class work with vector of node's ID instead of matrix.
 * Developer must decide how to acess node neighbour by current node ID.
 * This abstract layer from data structures and give more freedom to
 * developers. Function for retrieving neighgours passed to each method.
 *
 * Full alhorigthm devided on to steps.
 * <ol>
 *   <li><b>Calculate distancies</b> from start node to finish. This step can
 *     calculate distancies to all graph if it not dynamicly changed.</li>
 *   <li><b>Find path</b> from start node to finish node useing calculated
 *      distancies.</li>
 * </ol>
 *
 * For save performance and make algorithm more flexible this steps
 * divided to separed functions. Your can calculate all work matrix
 * and build path from any point to any other.
 *
 * @author Alexey Kolonitsky
 */
class BreadthFirst {

    public static var MAX_VALUE(default,never):Int = 2147483647;
    public static var MIN_VALUE(default,never):Int = -2147483648;

    /**
     * Create vector with distances from startIndex (start node id)
     * to endIndex (end node id). This method put startIndex to q and
     * invoke getNeigmburs method for it. Method stop calculation when
     * find neighbour with index == endIndex. If endIndex == start index
     * method calculate distancies to all nodes.
     *
     * @param source source object which passed to getNighbours function
     * @param startIndex index of start node
     * @param endIndex index of finish node
     * @param getNeighburs is a function that retrive indexes of neighbors.
     * Function must have following signature:
     * <pre>
     * getNigbour(source:Object, index:Int):Vector.&lt;Int&gt;
     * </pre>
     *
     * @return vector of distances by identifiers.
     */
    public static function bfs<T>(
        source:Array<T>,
        startIndex:Int, endIndex:Int,
        getNeighburs:Array<T>->Int->Array<Int>):Array<Int>
    {
        var i:Int, N:Int = source.length;
        var q:Array<Int> = new Array<Int>();
        q.push(startIndex);

        var distance:Array<Int> = [for (i in 0...N) MAX_VALUE];
        distance[startIndex] = 1;

        while (q.length > 0) {
            var curIndex:Int = q.shift();
            if (curIndex == endIndex && curIndex != startIndex)
                break;
            var neighbors:Array<Int> = getNeighburs(source, curIndex);
            for (i in 0...neighbors.length) {
                var neighborIndex:Int = neighbors[i];
                if (q.indexOf(neighborIndex) == -1 && distance[neighborIndex] > distance[curIndex] + 1) {
                    distance[neighborIndex] = distance[curIndex] + 1;
                    q.push(neighborIndex);
                }
            }
        }

        return distance;
    }

    /**
     * Create vector with distances from startIndex (start node id)
     * to endIndex (end node id). This method put startIndex to q and
     * invoke getNeigmburs method for it. Method stop calculation when
     * find neighbour with index == endIndex. If endIndex == start index
     * method calculate distancies to all nodes.
     *
     * @param source source object which passed to getNighbours function
     * @param startIndexes index of start node
     * @param getNeighburs is a function that retrive indexes of neighbors.
     * Function must have following signature:
     * <pre>
     * getNigbour(source:Object, index:Int):Vector.&lt;Int&gt;
     * </pre>
     *
     * @return vector of distances by identifiers.
     */
    public static function bfsArray<T>(
        source:Array<T>,
        startIndexes:Array<Int>,
        getNeighburs:Array<T>->Int->Array<Int>
    ):Array<Int> {
        var i:Int = 0, N:Int = source.length;
        var q:Array<Int> = startIndexes;

        var distance:Array<Int> = [ for (i in 0...N) MAX_VALUE];
        for (i in 0...q.length)
            distance[q[i]] = 1;

        while (q.length > 0) {
            var curIndex:Int = q.shift();
            var neighbors:Array<Int> = getNeighburs(source, curIndex);
            for (i in 0 ... neighbors.length) {
                var neighborIndex:Int = neighbors[i];
                if (q.indexOf(neighborIndex) == -1 && distance[neighborIndex] > distance[curIndex] + 1) {
                    distance[neighborIndex] = distance[curIndex] + 1;
                    q.push(neighborIndex);
                }
            }
        }

        return distance;
    }

    /**
     * Find path in source graph useing <code>bfs()</code> calculation
     * result.
     *
     * This method have the similiar signature except distances paramter.
     *
     * @param source graph in which path has founded
     * @param distance vector of distancies calculated with <cod>bfs()</code> function
     * @param startIndex index of start node
     * @param endIndex index of finish node
     * @param getNeighbors is a function that retrive indexes of neighbors.
     * Function must have following signature:
     * <pre>
     * getNigbour(source:Object, index:Int):Vector.&lt;Int&gt;
     * </pre>
     *
     * @return vector of vertex indexes in optimal path from node with startIndex
     * to node with endIndex.
     */
    public static function bfsPath<T>(
        source:Array<T>, distance:Array<Int>,
        startIndex:Int,
        endIndex:Int,
        getNeighbors:Array<T>->Int->Array<Int>
    ):Array<Int> {
        var cur:Int = endIndex, i:Int, j:Int, N:Int = distance[endIndex];
        var neighbours:Array<Int> = new Array<Int>();
        var neighboursCount:Int = 0;
        var result:Array<Int> = [ for (i in 0...N) 0];
        result[N - 1] = endIndex;

        var i:Int = N - 2;
        while (i > 0) {
            neighbours = getNeighbors(source, cur);
            neighboursCount = neighbours.length;

            j = 0;
            while (j < neighboursCount && distance[neighbours[j]] != i + 1)
            j++;

            cur = result[i] = neighbours[j];
            i--;
        }
        result[0] = startIndex;
        return result;
    }
}
