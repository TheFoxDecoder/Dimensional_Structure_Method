"""
    This is just a thought/ dream i saw migh work Crossing over multiple number of positions over the case with
    connections and making the connections between them it sound boring and complicated  but
    it's really not so just read the code. well you probably not get it doesnt matter
"""

from structurePlot import DimensionCalculation as Dcal


# build the cognition surface
class Surface:

    def __init__(self, num_nodes, dimensions):
        self.node_numbers = num_nodes  # number of nodes to build
        self.dimensions = dimensions  # number of dimensions will be building

    def generate_plot(self):
        """
        whole next work get into the graph image and networking
        :return: plot image
        """
    def calculation(self):
        Dcal(self.dimensions)
        Dcal.struct_plot()
