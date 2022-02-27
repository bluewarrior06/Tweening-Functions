#include "Tween.h"

float Tween::LinearTween(float t, float sv, float ev)
{
	return ((ev - sv) * t) + sv;

}

float Tween::CubicTweenIn(float t, float sv, float ev)
{
	return ((ev - sv) * t * t * t) + sv;
}

float Tween::CubicTweenOut(float t, float sv, float ev)
{
	float _t = t;
	_t--;
	return ((ev - sv) * (t * t * t + 1)) + sv;
}

float Tween::CubicTweenInOut(float t, float sv, float ev)
{
	float a = CubicTweenIn(t * 2, sv, Tween::LinearTween(0.5, sv, ev));
	float b = CubicTweenOut((t * 2) - 1, Tween::LinearTween(0.5, sv, ev), ev);
	if (t < 0.5)
	{
		return a;
	}
	return b;
}
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