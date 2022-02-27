#include "Tween.h"

/*
	How it works
	
	t - time
	sv - starting value
	ev - ending value

	interpolates from sv to ev with t
	t only goes from 0 - 1, but you can go further if you want
*/
//basically just a lerp function
float Tween::LinearTween(float t, float sv, float ev)
{
	return ((ev - sv) * t) + sv;
}

//smoothly transitions in
float Tween::CubicTweenIn(float t, float sv, float ev)
{
	return ((ev - sv) * t * t * t) + sv;
}

//smoothly transitions out, inverse of In by subtracting from ev instead of sv
float Tween::CubicTweenOut(float t, float sv, float ev)
{
	float _t = t;
	_t--;
	return ((ev - sv) * (t * t * t + 1)) + ev;
}

//smoothly transitions in, than out
float Tween::CubicTweenInOut(float t, float sv, float ev)
{
	//starting
	float a = CubicTweenIn(t * 2, sv, Tween::LinearTween(0.5, sv, ev));
	float b = CubicTweenOut((t * 2) - 1, Tween::LinearTween(0.5, sv, ev), ev);
	if (t < 0.5)
	{
		return a;
	}
	return b;
}
//smoothly transitions out, than back in
float Tween::CubicTweenOutIn(float t, float sv, float ev)
{
	float a = Tween::CubicTweenOut(t * 2, sv, Tween::LinearTween(0.5, sv, ev));
	float b = Tween::CubicTweenIn((t * 2) - 1, Tween::LinearTween(0.5, sv, ev), ev);
	if (t < 0.5)
	{
		return a;
	}
	return b;
}