# Tweening-Functions
Simple Tweening Algorithms

how does lerp work?
lets look at a simple question
we have two numbers 24 and 28 and we want to find the half way point.
the halfway point is 0, so, how to we find zero? we would get half of the value between the two points!
first, lets look at a wrong way of doing it.

lerp(t, a, b):
return (a+b)*t

okay, lets put in lerp(0.5, 24, 28)
facinating! it returns 26!!!!!
but wait, ooh um, uh oh... oh god, this is totaly wrong!!!!!!!!!!
you put in lerp(0.75, 24, 25) and got 39?!
now you put in -32,32 and put in 0.5, great you got 0!
but now you put in 0.25 and still get 0?!?!?!?!?!?!!!! oh um, oh boy...

the problem is that a+b makes the numbers grow, and that is not what we want to do. (and that the math is just totally wrong anyways)
24+28 is 52, and half of 52 is 26, but the point between 24 and 28 is 26.



so lets completely do it differently!
(a-b)*t - b
a = 24
b = 28
t = 0.5
output = 26
we start off by getting the distance between a and b                                                  ( A - B )          -->>            ( 24-28) = -4 )
then we use T to get a percentage of the distance to create an offset to subtract from B            ( (a-b) * T )        -->>         ( (24-26)* 0.5 = -2 )
now we subtract the OFFSET from B to get the point between a and b!                                ( (a-b)*t - B )	      -->>       ( (24-26)*0.5 - 28 = 26 )
to make it even simpler, you are just doing -2 - 28 = 26;


t = 0 makes the offset 0, subtracting nothing from 26 and making b stay as 28, but 1 makes the offset -4, taking a way from 28 to get 24 (which is a), and 0.5 gives -2 giving you 26

so now lets do the math!
(a+b)
24-28 = -4


(a+b)*t
-4*0.5 = -2

((a+b)*t) + 26
-2 + 26


so now we get this new function

------------------- formula to turn the distance into an offset
 |
lerp(t,a,b):_______
|       |
return ((a-b)*t)-b
          ^   ^_ ^_______________________
     distance  |			           			  |
      the weight weight                 |
              __________________________|
take away offset from b to get a point between a and b.
