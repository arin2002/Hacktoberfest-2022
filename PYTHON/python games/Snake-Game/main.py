from turtle import Screen, Turtle
import time
from snake import Snake
from food import Food
from score import Score
score = Score()
score.hideturtle()
score.penup()
score.goto(x=0,y=280)

screen = Screen()
screen.title("MY SNAKE GAME")
screen.setup(width=620, height=620)
screen.bgpic(picname="bgp.gif")
screen.tracer(0)
my_snake = Snake()
food = Food()
is_game_on = True

screen.listen()
screen.onkey(fun=my_snake.up, key="Up")
screen.onkey(my_snake.down, "Down")
screen.onkey(my_snake.left, "Left")
screen.onkey(my_snake.right, "Right")

while is_game_on:
    screen.update()
    time.sleep(0.1)
    score.write(arg="Score: " + str(score.total_score),font=("Arial",12,"bold"),align="center")
    my_snake.move()
    is_game_on = my_snake.boundary()
    head_x = my_snake.head.xcor()
    head_y = my_snake.head.ycor()

    for each_segment in my_snake.all_snakes[1:]:  #slicing
        # if self.all_snakes[each_segment].xcor() == head_x and self.all_snakes[each_segment].ycor() == head_y:
        if my_snake.head.distance(each_segment) < 6:
            is_game_on = False

    if my_snake.head.distance(food) < 10:
        print("boom boom caio")
        food.new_position()
        my_snake.add_snake()
        my_snake.add_snake()
        score.add_score()
        score.clear()


tom = Turtle()
tom.penup()
tom.hideturtle()
tom.color("black")
style = ('Arial', 30, "bold")
tom.write(arg="GAME OVER!", font=style, align="center")

screen.exitonclick()
