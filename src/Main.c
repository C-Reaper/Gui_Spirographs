#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/Spirograph.h"

float speed;
Spirograph sg;

void Setup(AlxWindow* w){
	speed = 1.0f;
	sg = Spirograph_New(
		(float[]){
			10.0f,
			5.0f,
			1.0f,
		},
		3U
	);
}
void Update(AlxWindow* w){
	if(Stroke(ALX_KEY_R).PRESSED){
		Spirograph_Reset(&sg);
	}
	if(Stroke(ALX_KEY_UP).PRESSED){
		speed += 10.0f * F32_Abs(speed) * w->ElapsedTime;
	}
	if(Stroke(ALX_KEY_DOWN).PRESSED){
		speed -= 10.0f * F32_Abs(speed) * w->ElapsedTime;
	}

	Spirograph_Update(&sg,w->Strokes,GetMouse(),speed * w->ElapsedTime);

	Clear(BLACK);

	Spirograph_Render(&sg,WINDOW_STD_ARGS);
}
void Delete(AlxWindow* w){
	Spirograph_Free(&sg);
}

int main(){
    if(Create("Spirographs",1900,1200,1,1,Setup,Update,Delete))
        Start();
    return 0;
}