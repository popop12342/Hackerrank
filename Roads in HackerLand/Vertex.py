class Vertex:

    def __init__(self, id):
        self.id = id
        self.neighbors = []
        self.distances = []

    def add_neighbor(self, vertex, distance):
        self.neighbors.append(vertex)
        self.distances.append(distance)