from turtle import Turtle
import random


class Food(Turtle):
    def __init__(self):
        super().__init__()
        self.shapesize(stretch_wid=0.4, stretch_len=0.4)
        self.shape("circle")
        self.color("orange")
        self.speed("fastest")
        self.penup()
        self.new_position()

    def new_position(self):
        random_x = random.randint(-300, 300)
        random_y = random.randint(-300, 300)
        self.goto(random_x, random_y)

