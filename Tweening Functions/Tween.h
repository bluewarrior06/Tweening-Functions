#pragma once
/*
	How it works

	t - time
	sv - starting value
	ev - ending value

	interpolates from sv to ev with t
	t only goes from 0 - 1, but you can go further if you want
*/

namespace Tween
{
	//basically just a lerp function
	float LinearTween(float t, float sv, float ev);

	//okay funny enough i legit forgot about how I came up with this function, it just like happened ._.
	/* 
	how does lerp work?
	lets look at a simple question
	we have two numbers -1 and 1 and we want to find the half way point.
	the halfway point is 0, so, how to we find zero? we would get half of the value between the two points!
	how do we find half of the value between the two points? first we simplify the question,
	we turn -1 to 1 to 0 to 2. 
	*/
	

	//smoothly transitions in
	float CubicTweenIn(float t, float sv, float ev);
	//smoothly transitions out
	float CubicTweenOut(float t, float sv, float ev);

	//smoothly transitions in, than out
	float CubicTweenInOut(float t, float sv, float ev);
	//smoothly transitions out, than back in
	float CubicTweenOutIn(float t, float sv, float ev);
}