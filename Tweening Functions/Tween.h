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

	//smoothly transitions in
	float CubicTweenIn(float t, float sv, float ev);
	//smoothly transitions out
	float CubicTweenOut(float t, float sv, float ev);

	//smoothly transitions in, than out
	float CubicTweenInOut(float t, float sv, float ev);
	//smoothly transitions out, than back in
	float CubicTweenOutIn(float t, float sv, float ev);
}