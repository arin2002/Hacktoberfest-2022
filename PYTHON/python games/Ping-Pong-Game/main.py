import time
from turtle import Turtle, Screen
from paddle import Paddle
from ball import Ball
from score import Score

ball = Ball()
screen = Screen()
screen.setup(width=900, height=600)
screen.bgpic("bg.gif")
screen.title("PONG GAME")
screen.tracer(0)

l_paddle = Paddle((-410, 0))
r_paddle = Paddle((410, 0))
l_score = Score(-40, 235)
r_score = Score(40, 235)

screen.listen()
screen.onkeypress(fun=l_paddle.p_up, key="w")
screen.onkeypress(fun=l_paddle.p_down, key="s")
screen.onkeypress(fun=r_paddle.p_up, key="Up")
screen.onkeypress(fun=r_paddle.p_down, key="Down")

border = Turtle()
border.penup()
border.color("white")
border.hideturtle()
border.pensize(3)
border.setheading(90)
border.goto(0, -280)
while border.ycor() < 290:
    border.pendown()
    border.forward(10)
    border.penup()
    border.forward(10)

sleep_time = 0.1
is_game_on = True
while is_game_on:
    ball.move()
    if ball.xcor() > 435:
        l_paddle.score += 1
        ball.reset_ball()
        screen.update()
        time.sleep(1)
        sleep_time = 0.1

    if ball.xcor() < -435:
        r_paddle.score += 1
        ball.reset_ball()
        screen.update()
        time.sleep(1)
        sleep_time = 0.1

    r_score.clear()
    l_score.clear()
    r_score.write(arg=r_paddle.score, align="center", font=("Comic Sans MS", 40, "bold"))
    l_score.write(arg=l_paddle.score, align="center", font=("Comic Sans MS", 40, "bold"))

    if ball.ycor() > 280 or ball.ycor() < -280:
        ball.y_bounce()

    if ball.distance(l_paddle) < 51 and ball.xcor() <= -390 or ball.distance(r_paddle) < 51 and ball.xcor() >= 390:
        ball.x_bounce()
        sleep_time /= 1.2

    time.sleep(sleep_time)
    screen.update()

    if l_paddle.score == 5 or r_paddle.score == 5:
        is_game_on = False

game_over = Turtle()
game_over.hideturtle()
game_over.pencolor("black")
if l_paddle.score == 5:
    game_over.write(arg="Left Player Win!", align="center", font=("Arial", 30, "bold"))
elif r_paddle.score == 5:
    game_over.write(arg="Right Player Win!", align="center", font=("Arial", 30, "bold"))

screen.exitonclick()
