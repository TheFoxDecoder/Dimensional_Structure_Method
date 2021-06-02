"""
    calculate the number of dimension hypercube and plotting them to analyze

"""


class DimensionCalculation:
    def __init__(self, number_of_d):
        self.d = number_of_d
        self.struct_arr = []
        self.hyper_cube_str = 65536

    def struct_plot(self):
        for i in range(self.d):
            self.struct_arr.append([i, self.dimensional_connection_equation(i)])

    @staticmethod
    def dimensional_connection_equation(d_num):
        # declaring the list
        info = []  # [Dimension [Neurons,Connections]]
        # Calculation
        n = 2 ** d_num
        op = int((n / 2) * d_num)
        print(" Dimension = " + str(d_num) + "\n\tNeurons: " + str(n) + "\n\tConnections = " + str(op))
        info = [n, op]
        return info

    def array_print(self):
        if len(self.struct_arr) == 0:
            self.struct_plot()
        print(self.struct_arr)

    def hypercube_build(self, cube_dimension):
        """
        inside of the hypercube there are neurons contains they connects to other neurons and they connected in DSM way
        they need to build in the cubical way and making the view point in that method is the structure
        :return: node connections productivity/ bandwidth
        """

    def connecting_hypercubes(self):
        """
        connecting the hyper cubes to each other in  the visualizing view
        :return:
        """
class HyperPlotting(DimensionCalculation):
    @staticmethod
    def import_plotting_lib():
        try:
            from matplotlib import pyplot as plot
        except ImportError or ImportWarning:
            print("The matplotlib cannot be imported")



