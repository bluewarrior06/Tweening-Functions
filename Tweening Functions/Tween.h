#pragma once

namespace Tween
{
	float LinearTween(float t, float sv, float ev);

	float CubicTweenIn(float t, float sv, float ev);
	float CubicTweenOut(float t, float sv, float ev);

	float CubicTweenInOut(float t, float sv, float ev);
	float CubicTweenOutIn(float t, float sv, float ev);
}