#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <conio.h>

float RADtoDEG(float x){
	float Gradmass = (x/ M_PI) * 180.f; //Bogenmaﬂ zu Gradmaﬂ
	return Gradmass;

}
float DEGtoRAD(float x){

	float Bogenmass = (x / 180.f) * M_PI;
	return Bogenmass;
}
void RADtoDEGRef(float& GradmassRef){
	GradmassRef = (GradmassRef / M_PI) * 180.f;
}
void DEGtoRADRef(float& BogenmassRef){
	BogenmassRef = (BogenmassRef / 180.f) * M_PI;
}
void RADtoDEGPoint(float* GradmassPtr){ 
	*GradmassPtr = (*GradmassPtr / M_PI) * 180.f; 
}
void DEGtoRADRefPoint(float* BogenmassPtr){
	*BogenmassPtr = (*BogenmassPtr / 180.f) * M_PI;
}