from turtle import Turtle


class Score(Turtle):
    def __init__(self, x, y):
        super().__init__()
        self.hideturtle()
        self.penup()
        self.color("white")
        self.goto(x, y)
