#define PI 3.141592654f
#define PI2 PI * 2

#define PI8 float(PI/8.0f)    //22.5도
#define PI16 float(PI/16.0f)  //11.25도
#define PI32 float(PI/32.0f)  //5.62도
#define PI64 float(PI/64.0f)  //2.81도
#define PI128 float(PI/128.0f)//1.40도


namespace Neptune_UTIL
{
	float getDistance(float startX, float startY, float endX, float endY);

	float getAngle(float x1, float y1, float x2, float y2);

}
