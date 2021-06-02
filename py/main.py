import surface as sur
import structurePlot as s


# import stream


class Starter:
    def __init__(self):
        """
                to program activate there is the structure file to read AKA Building manual only can be write by me and manually
                so the file highly encrypted and only a human unreadable code reading by the specific program,
                understanding what it is and what it is about using the thar manual or technique  to build the cognition system
                and this specific py module use the preview to the building cognition system
                :return: preview of Cognition / live view streams specific [user_id]
        """

    @staticmethod
    def surface_import():
        surface = sur.Surface(10, 13)
        surface.calculation()
    # def reading_structure(self):


if __name__ == "__main__":
    D = s.DimensionCalculation(13)
    # D.struct_plot()
    D.array_print()
