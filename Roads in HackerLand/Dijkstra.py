import math

graph = []
dist = []
prev = []

def Dijkstra(graph, source):

    q = []

    for v in graph:
        dist[v] = math.inf
        prev[v] = None

        q.append(v)

    dist[source] = 0

    while (q):
        u = min_dist(q)

        q.remove(u)

        for v in u.neighbors:
            alt = dist[u] + length(u, v)
            if (alt < dist[v]):
                dist[v] = alt
                prev[u]
    
    return dist, prev

def min_dist(q):
    min = math.inf

    for i in range(len(q)):
        if (graph[i] in q):
            if (dist[i] < min):
                min = dist[i]
    
    return min

def length(u, v):
    i = u.neighbors.index(v)
    return u.distances[i]