from turtle import Turtle
class Score(Turtle):
    def __init__(self):
        super().__init__()
        self.total_score = 0
        self.penup()
        self.color("white")
        self.speed("fastest")

    def add_score(self):
        self.total_score += 1



