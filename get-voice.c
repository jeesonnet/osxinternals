#include<ApplicationServices/ApplicationServices.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[]){

	OSErr rc;
	VoiceSpec vs;
	int voice;

	rc = GetIndVoice(voice, &vs);

	if(rc){printf("Cann not get voice!\n");} 

	return 0;
		
}
