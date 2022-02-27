- HAVENT TESTED IN C++ YET, DID MY BEST EFFORT TO CONVERT MY LUA TO C++.
# Tweening-Functions | Lerping | Overall Explanations
                                                               CamiXes
                                                               
<h1>First of all, what is lerping?</h1>
what is lerping?
lerping is linear interpolation which is shortened to lerp.
lerping is when you want to get a point between two values
 
 <h2>The Wrong way</h2>
lets look at a simple question
we have two numbers 24 and 28 and we want to find the half way point.
the halfway point is 26, so we need to figure out on how to get 26 from 24 and 28
first, lets look at a wrong way of doing it.
lerp(t, a, b):<br/>
return (a+b)*t<br/>
<br/>
<br/>
okay, lets put in lerp(0.5, 24, 28)<br/>
facinating! it returns 26!!!!!<br/>
but wait, ooh um, uh oh... oh god, this is totaly wrong!!!!!!!!!!<br/>
you put in lerp(0.75, 24, 25) and got 39?!<br/>
now you put in -32,32 and put in 0.5, great you got 0!<br/>
but now you put in 0.25 and still get 0?!?!?!?!?!?!!!! oh um, oh boy...<br/>

the problem is that a+b makes the numbers grow, and that is not what we want to do. (and that the math is just totally wrong anyways)<br/>
24+28 is 52, and half of 52 is 26, but the point between 24 and 28 is 26.<br/>


<h2> The Right way! </h2>



so lets completely do it differently!<br/>
<br/>
formula = (a-b)*t - b<br/>
a = 24<br/>
b = 28<br/>
t = 0.5<br/>
<br/>
output = 26<br/>
<br/>
<br/>
it seems that the way to get 26 is by subtracting 28 by 2, so, how do we do that?<br/>

- we start off by getting the distance between a and b                                                  ( A - B )          -->>            ( 24-28) = -4 ) <br/>
- then we use T to get a percentage of the distance to create an OFFSET to subtract from B            ( (a-b) * T )        -->>         ( (24-26)* 0.5 = -2 ) <- *thats the -2 we need! <br/>
- now we subtract the OFFSET from B to get the point between a and b!                                ( (a-b)*t - B )	      -->>       ( (24-26)*0.5 - 28 = 26 ) <br/>
<br/>
t = 0 makes the offset 0, subtracting nothing from 26 and making b stay as 28, but 1 makes the offset -4, taking a way from 28 to get 24 (which is a), and 0.5 gives -2 giving you 26<br/>
<br/>
so now lets do the math!<br/>
<br/>
(a+b)<br/>
24-28 = -4<br/>
<br/>
(a+b)*t<br/>
-4*0.5 = -2<br/>
<br/>
((a+b)*t) + 26<br/>
-2 + 26<br/>
<br/>
<br/>
<br/>
<br/>
<br/>


