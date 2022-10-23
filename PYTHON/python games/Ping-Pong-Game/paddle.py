from turtle import Turtle


class Paddle(Turtle):
    def __init__(self, cor):
        super().__init__()
        self.shape("square")
        self.cord = cor
        self.penup()
        self.hideturtle()
        self.goto(self.cord)
        self.color("white")
        self.showturtle()
        self.turtlesize(stretch_wid=4, stretch_len=1)
        self.score = 0

    def p_up(self):
        p_y_pos = self.ycor()
        self.setpos(x=self.cord[0], y=p_y_pos + 20)

    def p_down(self):
        p_y_pos = self.ycor()
        self.setpos(x=self.cord[0], y=p_y_pos - 20)
