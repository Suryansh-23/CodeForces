from collections import defaultdict


def dfs(v, visited, parent, graph):

    # Mark the current node as visited
    visited[v] = True

    # Recur for all the vertices
    # adjacent to this vertex
    for i in graph[v]:

        # If the node is not
        # visited then recurse on it
        if visited[i] == False:
            if dfs(i, visited, v, graphko):
                return True
        # If an adjacent vertex is
        # visited and not parent
        # of current vertex,
        # then there is a cycle
        elif parent != i:
            return True

    return False


def cycle(V, graph):

    # Mark all the vertices
    # as not visited
    visited = [False] * (V)

    # Call the recursive helper
    # function to detect cycle in different
    # DFS trees
    for i in range(V):

        # Don't recur for u if it
        # is already visited
        if visited[i] == False:
            if (dfs(i, visited, -1, graph)) == True:
                return True

    return False


x, y = map(int, input().split())
gr = defaultdict(set)
for _ in range(y):
    a, b = map(int, input().split())
    gr[a].add(b)

print(gr)
print(cycle(gr, 1, 1, set()))
# if cycle(gr, 1, set()):
#     print("YES")
# else:
#     print("NO")
