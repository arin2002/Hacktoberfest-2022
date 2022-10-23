from turtle import Turtle

STARTING_POS = [(0, 0), (-10, 0), (-20, 0)]
MOVE_DISTANCE = 10
UP = 90
DOWN = 270
RIGHT = 0
LEFT = 180


class Snake:

    def __init__(self):
        self.all_snakes = []
        self.create_snake()
        self.head = self.all_snakes[0]

    def create_snake(self):

        for i in range(0, 3):
            new_snake = Turtle()
            new_snake.penup()
            if i == 0:
                new_snake.shape("circle")
                new_snake.turtlesize(stretch_wid=0.7, stretch_len=0.7)
            else:
                new_snake.shape("circle")
                new_snake.turtlesize(stretch_wid=0.7, stretch_len=0.7)

            new_snake.goto(STARTING_POS[i])
            self.all_snakes.append(new_snake)

    def move(self):

        for snake_num in range(len(self.all_snakes) - 1, 0, -1):
            pre_snake_x = self.all_snakes[snake_num - 1].xcor()
            pre_snake_y = self.all_snakes[snake_num - 1].ycor()
            self.all_snakes[snake_num].goto(pre_snake_x, pre_snake_y)
        self.head.forward(MOVE_DISTANCE)

    def boundary(self):
        if self.head.xcor() > 305 or self.head.ycor() > 305 or self.head.xcor() < -308 or self.head.ycor() < -308:
            return False
        else:

            return True

    def left(self):
        if self.head.heading() != RIGHT:
            self.head.setheading(LEFT)

    def right(self):
        if self.head.heading() != LEFT:
            self.head.setheading(RIGHT)

    def up(self):
        if self.head.heading() != DOWN:
            self.head.setheading(UP)

    def down(self):
        if self.head.heading() != UP:
            self.head.setheading(DOWN)

    def add_snake(self):
        new_snake = Turtle()
        new_snake.penup()
        new_snake.shape("circle")
        new_snake.turtlesize(stretch_wid=0.7, stretch_len=0.7)
        last_snake_x = self.all_snakes[len(self.all_snakes) - 1].xcor()
        last_snake_y = self.all_snakes[len(self.all_snakes) - 1].ycor()
        new_snake.goto(last_snake_x, last_snake_y)
        self.all_snakes.append(new_snake)







