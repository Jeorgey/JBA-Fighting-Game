#define _USE_MATH_DEFINES
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "CC212VSGL.h"
#include <math.h>
#pragma comment(lib, "cc212vsgl.lib")
int Background[220];
int DioDeathR[16], DioDeath[16];
int JotaroDeath[18], JotaroDeathR[18];
int JotaroIntro[32], JotaroOutro[26];
int DioIntro[32], DioOutro[26];
int DioH[6], DioHR[6];
int DioHealth[26];
int DioJ[25], DioJR[25];
int DioAL[7];
int DioAH[12];
int DioS[38];
int DioALR[7];
int DioAHR[12];
int DioSR[38];
int DioWB[16], DioWBR[16];
int DioWF[16], DioWFR[16];
int DioStand[36], DioStandR[36], DioSuper[5], DioSuperR[5];                        // Where I saved the animation frames.
int JotaroH[4], JotaroHR[4];
int JotaroAL[8];
int JotaroAH[10];
int JotaroS[24];
int JotaroALR[8];
int JotaroAHR[10];
int JotaroSR[24];
int JotaroHealth[26], SuperIcons[2];
int JotaroJ[25], JotaroJR[25];
int JotaroWF[16], JotaroWFR[16];
int JotaroWB[16], JotaroWBR[16];
int JotaroStand[38], JotaroStandR[38], JotaroSuper[5], JotaroSuperR[5];
int LS[5], Point, Rematch;
// Loading the animation frames and displaying the loading screen. 
void ReadLoadingScreen() {
	LS[0] = CC212VSGL::loadImage("LoadingScreen\\LoadingScreen-0.PNG");
	CC212VSGL::resizeImage(LS[0], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	LS[1] = CC212VSGL::loadImage("LoadingScreen\\LoadingScreen-1.PNG");
	CC212VSGL::resizeImage(LS[1], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	LS[2] = CC212VSGL::loadImage("LoadingScreen\\LoadingScreen-2.PNG");
	CC212VSGL::resizeImage(LS[2], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	LS[3] = CC212VSGL::loadImage("LoadingScreen\\LoadingScreen-3.PNG");
	CC212VSGL::resizeImage(LS[3], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	LS[4] = CC212VSGL::loadImage("LoadingScreen\\LoadingScreen-4.PNG");
	CC212VSGL::resizeImage(LS[4], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Rematch = CC212VSGL::loadImage("LoadingScreen\\Rematch.PNG");
	Point = CC212VSGL::loadImage("LoadingScreen\\Point.PNG");
	CC212VSGL::resizeImage(Point, 65, 75);
}
void ReadDioDeathR() {
	DioDeathR[0] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-0.PNG");
	CC212VSGL::resizeImage(DioDeathR[0], 400, 530);
	DioDeathR[1] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-1.PNG");
	CC212VSGL::resizeImage(DioDeathR[1], 400, 530);
	DioDeathR[2] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-2.PNG");
	CC212VSGL::resizeImage(DioDeathR[2], 400, 530);
	DioDeathR[3] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-3.PNG");
	CC212VSGL::resizeImage(DioDeathR[3], 400, 530);
	DioDeathR[4] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-4.PNG");
	CC212VSGL::resizeImage(DioDeathR[4], 400, 530);
	DioDeathR[5] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-5.PNG");
	CC212VSGL::resizeImage(DioDeathR[5], 400, 530);
	DioDeathR[6] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-6.PNG");
	CC212VSGL::resizeImage(DioDeathR[6], 400, 530);
	DioDeathR[7] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-7.PNG");
	CC212VSGL::resizeImage(DioDeathR[7], 400, 530);
	DioDeathR[8] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-8.PNG");
	CC212VSGL::resizeImage(DioDeathR[8], 400, 530);
	DioDeathR[9] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-9.PNG");
	CC212VSGL::resizeImage(DioDeathR[9], 400, 530);
	DioDeathR[10] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-10.PNG");
	CC212VSGL::resizeImage(DioDeathR[10], 400, 530);
	DioDeathR[11] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-11.PNG");
	CC212VSGL::resizeImage(DioDeathR[11], 400, 530);
	DioDeathR[12] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-12.PNG");
	CC212VSGL::resizeImage(DioDeathR[12], 400, 530);
	DioDeathR[13] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-13.PNG");
	CC212VSGL::resizeImage(DioDeathR[13], 400, 530);
	DioDeathR[14] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-14.PNG");
	CC212VSGL::resizeImage(DioDeathR[14], 400, 530);
	DioDeathR[15] = CC212VSGL::loadImage("DioR\\Death\\Dio-Death-15.PNG");
	CC212VSGL::resizeImage(DioDeathR[15], 400, 530);
}
void ReadDioOutro() {
	DioOutro[0] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-0.PNG");
	CC212VSGL::resizeImage(DioOutro[0], 400, 530);
	DioOutro[1] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-1.PNG");
	CC212VSGL::resizeImage(DioOutro[1], 400, 530);
	DioOutro[2] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-2.PNG");
	CC212VSGL::resizeImage(DioOutro[2], 400, 530);
	DioOutro[3] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-3.PNG");
	CC212VSGL::resizeImage(DioOutro[3], 400, 530);
	DioOutro[4] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-4.PNG");
	CC212VSGL::resizeImage(DioOutro[4], 400, 530);
	DioOutro[5] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-5.PNG");
	CC212VSGL::resizeImage(DioOutro[5], 400, 530);
	DioOutro[6] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-6.PNG");
	CC212VSGL::resizeImage(DioOutro[6], 400, 530);
	DioOutro[7] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-7.PNG");
	CC212VSGL::resizeImage(DioOutro[7], 400, 530);
	DioOutro[8] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-8.PNG");
	CC212VSGL::resizeImage(DioOutro[8], 400, 530);
	DioOutro[9] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-9.PNG");
	CC212VSGL::resizeImage(DioOutro[9], 400, 530);
	DioOutro[10] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-10.PNG");
	CC212VSGL::resizeImage(DioOutro[10], 400, 530);
	DioOutro[11] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-11.PNG");
	CC212VSGL::resizeImage(DioOutro[11], 400, 530);
	DioOutro[12] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-12.PNG");
	CC212VSGL::resizeImage(DioOutro[12], 400, 530);
	DioOutro[13] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-13.PNG");
	CC212VSGL::resizeImage(DioOutro[13], 400, 530);
	DioOutro[14] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-14.PNG");
	CC212VSGL::resizeImage(DioOutro[14], 400, 530);
	DioOutro[15] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-15.PNG");
	CC212VSGL::resizeImage(DioOutro[15], 400, 530);
	DioOutro[16] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-16.PNG");
	CC212VSGL::resizeImage(DioOutro[16], 400, 530);
	DioOutro[17] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-17.PNG");
	CC212VSGL::resizeImage(DioOutro[17], 400, 530);
	DioOutro[18] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-18.PNG");
	CC212VSGL::resizeImage(DioOutro[18], 400, 530);
	DioOutro[19] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-19.PNG");
	CC212VSGL::resizeImage(DioOutro[19], 400, 530);
	DioOutro[20] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-20.PNG");
	CC212VSGL::resizeImage(DioOutro[20], 400, 530);
	DioOutro[21] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-21.PNG");
	CC212VSGL::resizeImage(DioOutro[21], 400, 530);
	DioOutro[22] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-22.PNG");
	CC212VSGL::resizeImage(DioOutro[22], 400, 530);
	DioOutro[23] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-23.PNG");
	CC212VSGL::resizeImage(DioOutro[23], 400, 530);
	DioOutro[24] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-24.PNG");
	CC212VSGL::resizeImage(DioOutro[24], 400, 530);
	DioOutro[25] = CC212VSGL::loadImage("Dio\\Outro\\Dio-Outro-25.PNG");
	CC212VSGL::resizeImage(DioOutro[25], 400, 530);
}
void ReadJotaroDeath() {
	JotaroDeath[0] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-0.PNG");
	CC212VSGL::resizeImage(JotaroDeath[0], 400, 530);
	JotaroDeath[1] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-1.PNG");
	CC212VSGL::resizeImage(JotaroDeath[1], 400, 530);
	JotaroDeath[2] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-2.PNG");
	CC212VSGL::resizeImage(JotaroDeath[2], 400, 530);
	JotaroDeath[3] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-3.PNG");
	CC212VSGL::resizeImage(JotaroDeath[3], 400, 530);
	JotaroDeath[4] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-4.PNG");
	CC212VSGL::resizeImage(JotaroDeath[4], 400, 530);
	JotaroDeath[5] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-5.PNG");
	CC212VSGL::resizeImage(JotaroDeath[5], 400, 530);
	JotaroDeath[6] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-6.PNG");
	CC212VSGL::resizeImage(JotaroDeath[6], 400, 530);
	JotaroDeath[7] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-7.PNG");
	CC212VSGL::resizeImage(JotaroDeath[7], 400, 530);
	JotaroDeath[8] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-8.PNG");
	CC212VSGL::resizeImage(JotaroDeath[8], 400, 530);
	JotaroDeath[9] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-9.PNG");
	CC212VSGL::resizeImage(JotaroDeath[9], 400, 530);
	JotaroDeath[10] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-10.PNG");
	CC212VSGL::resizeImage(JotaroDeath[10], 400, 530);
	JotaroDeath[11] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-11.PNG");
	CC212VSGL::resizeImage(JotaroDeath[11], 400, 530);
	JotaroDeath[12] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-12.PNG");
	CC212VSGL::resizeImage(JotaroDeath[12], 400, 530);
	JotaroDeath[13] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-13.PNG");
	CC212VSGL::resizeImage(JotaroDeath[13], 400, 530);
	JotaroDeath[14] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-14.PNG");
	CC212VSGL::resizeImage(JotaroDeath[14], 400, 530);
	JotaroDeath[15] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-15.PNG");
	CC212VSGL::resizeImage(JotaroDeath[15], 400, 530);
	JotaroDeath[16] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-16.PNG");
	CC212VSGL::resizeImage(JotaroDeath[16], 400, 530);
	JotaroDeath[17] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-17.PNG");
	CC212VSGL::resizeImage(JotaroDeath[17], 400, 530);
	JotaroDeath[18] = CC212VSGL::loadImage("Jotaro\\Death\\Jotaro-Death-18.PNG");
	CC212VSGL::resizeImage(JotaroDeath[18], 400, 530);
}
void ReadJotaroDeathR() {
	JotaroDeathR[0] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-0.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[0], 400, 530);
	JotaroDeathR[1] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-1.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[1], 400, 530);
	JotaroDeathR[2] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-2.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[2], 400, 530);
	JotaroDeathR[3] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-3.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[3], 400, 530);
	JotaroDeathR[4] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-4.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[4], 400, 530);
	JotaroDeathR[5] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-5.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[5], 400, 530);
	JotaroDeathR[6] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-6.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[6], 400, 530);
	JotaroDeathR[7] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-7.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[7], 400, 530);
	JotaroDeathR[8] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-8.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[8], 400, 530);
	JotaroDeathR[9] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-9.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[9], 400, 530);
	JotaroDeathR[10] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-10.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[10], 400, 530);
	JotaroDeathR[11] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-11.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[11], 400, 530);
	JotaroDeathR[12] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-12.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[12], 400, 530);
	JotaroDeathR[13] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-13.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[13], 400, 530);
	JotaroDeathR[14] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-14.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[14], 400, 530);
	JotaroDeathR[15] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-15.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[15], 400, 530);
	JotaroDeathR[16] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-16.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[16], 400, 530);
	JotaroDeathR[17] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-17.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[17], 400, 530);
	JotaroDeathR[18] = CC212VSGL::loadImage("JotaroR\\Death\\Jotaro-Death-18.PNG");
	CC212VSGL::resizeImage(JotaroDeathR[18], 400, 530);
}
void ReadJotaroOutro() {
	JotaroOutro[0] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-0.PNG");
	CC212VSGL::resizeImage(JotaroOutro[0], 400, 530);
	JotaroOutro[1] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-1.PNG");
	CC212VSGL::resizeImage(JotaroOutro[1], 400, 530);
	JotaroOutro[2] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-2.PNG");
	CC212VSGL::resizeImage(JotaroOutro[2], 400, 530);
	JotaroOutro[3] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-3.PNG");
	CC212VSGL::resizeImage(JotaroOutro[3], 400, 530);
	JotaroOutro[4] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-4.PNG");
	CC212VSGL::resizeImage(JotaroOutro[4], 400, 530);
	JotaroOutro[5] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-5.PNG");
	CC212VSGL::resizeImage(JotaroOutro[5], 400, 530);
	JotaroOutro[6] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-6.PNG");
	CC212VSGL::resizeImage(JotaroOutro[6], 400, 530);
	JotaroOutro[7] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-7.PNG");
	CC212VSGL::resizeImage(JotaroOutro[7], 400, 530);
	JotaroOutro[8] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-8.PNG");
	CC212VSGL::resizeImage(JotaroOutro[8], 400, 530);
	JotaroOutro[9] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-9.PNG");
	CC212VSGL::resizeImage(JotaroOutro[9], 400, 530);
	JotaroOutro[10] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-10.PNG");
	CC212VSGL::resizeImage(JotaroOutro[10], 400, 530);
	JotaroOutro[11] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-11.PNG");
	CC212VSGL::resizeImage(JotaroOutro[11], 400, 530);
	JotaroOutro[12] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-12.PNG");
	CC212VSGL::resizeImage(JotaroOutro[12], 400, 530);
	JotaroOutro[13] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-13.PNG");
	CC212VSGL::resizeImage(JotaroOutro[13], 400, 530);
	JotaroOutro[14] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-14.PNG");
	CC212VSGL::resizeImage(JotaroOutro[14], 400, 530);
	JotaroOutro[15] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-15.PNG");
	CC212VSGL::resizeImage(JotaroOutro[15], 400, 530);
	JotaroOutro[16] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-16.PNG");
	CC212VSGL::resizeImage(JotaroOutro[16], 400, 530);
	JotaroOutro[17] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-17.PNG");
	CC212VSGL::resizeImage(JotaroOutro[17], 400, 530);
	JotaroOutro[18] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-18.PNG");
	CC212VSGL::resizeImage(JotaroOutro[18], 400, 530);
	JotaroOutro[19] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-19.PNG");
	CC212VSGL::resizeImage(JotaroOutro[19], 400, 530);
	JotaroOutro[20] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-20.PNG");
	CC212VSGL::resizeImage(JotaroOutro[20], 400, 530);
	JotaroOutro[21] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-21.PNG");
	CC212VSGL::resizeImage(JotaroOutro[21], 400, 530);
	JotaroOutro[22] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-22.PNG");
	CC212VSGL::resizeImage(JotaroOutro[22], 400, 530);
	JotaroOutro[23] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-23.PNG");
	CC212VSGL::resizeImage(JotaroOutro[23], 400, 530);
	JotaroOutro[24] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-24.PNG");
	CC212VSGL::resizeImage(JotaroOutro[24], 400, 530);
	JotaroOutro[25] = CC212VSGL::loadImage("Jotaro\\Outro\\Jotaro-Outro-25.PNG");
	CC212VSGL::resizeImage(JotaroOutro[25], 400, 530);
}
void ReadDioDeath() {
	DioDeath[0] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-0.PNG");
	CC212VSGL::resizeImage(DioDeath[0], 400, 530);
	DioDeath[1] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-1.PNG");
	CC212VSGL::resizeImage(DioDeath[1], 400, 530);
	DioDeath[2] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-2.PNG");
	CC212VSGL::resizeImage(DioDeath[2], 400, 530);
	DioDeath[3] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-3.PNG");
	CC212VSGL::resizeImage(DioDeath[3], 400, 530);
	DioDeath[4] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-4.PNG");
	CC212VSGL::resizeImage(DioDeath[4], 400, 530);
	DioDeath[5] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-5.PNG");
	CC212VSGL::resizeImage(DioDeath[5], 400, 530);
	DioDeath[6] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-6.PNG");
	CC212VSGL::resizeImage(DioDeath[6], 400, 530);
	DioDeath[7] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-7.PNG");
	CC212VSGL::resizeImage(DioDeath[7], 400, 530);
	DioDeath[8] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-8.PNG");
	CC212VSGL::resizeImage(DioDeath[8], 400, 530);
	DioDeath[9] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-9.PNG");
	CC212VSGL::resizeImage(DioDeath[9], 400, 530);
	DioDeath[10] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-10.PNG");
	CC212VSGL::resizeImage(DioDeath[10], 400, 530);
	DioDeath[11] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-11.PNG");
	CC212VSGL::resizeImage(DioDeath[11], 400, 530);
	DioDeath[12] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-12.PNG");
	CC212VSGL::resizeImage(DioDeath[12], 400, 530);
	DioDeath[13] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-13.PNG");
	CC212VSGL::resizeImage(DioDeath[13], 400, 530);
	DioDeath[14] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-14.PNG");
	CC212VSGL::resizeImage(DioDeath[14], 400, 530);
	DioDeath[15] = CC212VSGL::loadImage("Dio\\Death\\Dio-Death-15.PNG");
	CC212VSGL::resizeImage(DioDeath[15], 400, 530);
}
void ReadJotaroIntro() {
	JotaroIntro[0] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-0.PNG");
	CC212VSGL::resizeImage(JotaroIntro[0], 400, 530);
	JotaroIntro[1] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-1.PNG");
	CC212VSGL::resizeImage(JotaroIntro[1], 400, 530);
	JotaroIntro[2] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-2.PNG");
	CC212VSGL::resizeImage(JotaroIntro[2], 400, 530);
	JotaroIntro[3] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-3.PNG");
	CC212VSGL::resizeImage(JotaroIntro[3], 400, 530);
	JotaroIntro[4] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-4.PNG");
	CC212VSGL::resizeImage(JotaroIntro[4], 400, 530);
	JotaroIntro[5] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-5.PNG");
	CC212VSGL::resizeImage(JotaroIntro[5], 400, 530);
	JotaroIntro[6] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-6.PNG");
	CC212VSGL::resizeImage(JotaroIntro[6], 400, 530);
	JotaroIntro[7] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-7.PNG");
	CC212VSGL::resizeImage(JotaroIntro[7], 400, 530);
	JotaroIntro[8] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-8.PNG");
	CC212VSGL::resizeImage(JotaroIntro[8], 400, 530);
	JotaroIntro[9] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-9.PNG");
	CC212VSGL::resizeImage(JotaroIntro[9], 400, 530);
	JotaroIntro[10] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-10.PNG");
	CC212VSGL::resizeImage(JotaroIntro[10], 400, 530);
	JotaroIntro[11] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-11.PNG");
	CC212VSGL::resizeImage(JotaroIntro[11], 400, 530);
	JotaroIntro[12] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-12.PNG");
	CC212VSGL::resizeImage(JotaroIntro[12], 400, 530);
	JotaroIntro[13] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-13.PNG");
	CC212VSGL::resizeImage(JotaroIntro[13], 400, 530);
	JotaroIntro[14] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-14.PNG");
	CC212VSGL::resizeImage(JotaroIntro[14], 400, 530);
	JotaroIntro[15] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-15.PNG");
	CC212VSGL::resizeImage(JotaroIntro[15], 400, 530);
	JotaroIntro[16] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-16.PNG");
	CC212VSGL::resizeImage(JotaroIntro[16], 400, 530);
	JotaroIntro[17] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-17.PNG");
	CC212VSGL::resizeImage(JotaroIntro[17], 400, 530);
	JotaroIntro[18] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-18.PNG");
	CC212VSGL::resizeImage(JotaroIntro[18], 400, 530);
	JotaroIntro[19] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-19.PNG");
	CC212VSGL::resizeImage(JotaroIntro[19], 400, 530);
	JotaroIntro[20] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-20.PNG");
	CC212VSGL::resizeImage(JotaroIntro[20], 400, 530);
	JotaroIntro[21] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-21.PNG");
	CC212VSGL::resizeImage(JotaroIntro[21], 400, 530);
	JotaroIntro[22] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-22.PNG");
	CC212VSGL::resizeImage(JotaroIntro[22], 400, 530);
	JotaroIntro[23] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-23.PNG");
	CC212VSGL::resizeImage(JotaroIntro[23], 400, 530);
	JotaroIntro[24] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-24.PNG");
	CC212VSGL::resizeImage(JotaroIntro[24], 400, 530);
	JotaroIntro[25] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-25.PNG");
	CC212VSGL::resizeImage(JotaroIntro[25], 400, 530);
	JotaroIntro[26] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-26.PNG");
	CC212VSGL::resizeImage(JotaroIntro[26], 400, 530);
	JotaroIntro[27] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-27.PNG");
	CC212VSGL::resizeImage(JotaroIntro[27], 400, 530);
	JotaroIntro[28] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-28.PNG");
	CC212VSGL::resizeImage(JotaroIntro[28], 400, 530);
	JotaroIntro[29] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-29.PNG");
	CC212VSGL::resizeImage(JotaroIntro[29], 400, 530);
	JotaroIntro[30] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-30.PNG");
	CC212VSGL::resizeImage(JotaroIntro[30], 400, 530);
	JotaroIntro[31] = CC212VSGL::loadImage("Jotaro\\Intro\\Jotaro-Intro-31.PNG");
	CC212VSGL::resizeImage(JotaroIntro[31], 400, 530);
}
void ReadDioStand() {
	DioStand[0] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-0.PNG");
	CC212VSGL::resizeImage(DioStand[0], 502, 542);
	DioStand[1] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-1.PNG");
	CC212VSGL::resizeImage(DioStand[1], 502, 542);
	DioStand[2] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-2.PNG");
	CC212VSGL::resizeImage(DioStand[2], 502, 542);
	DioStand[3] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-3.PNG");
	CC212VSGL::resizeImage(DioStand[3], 502, 542);
	DioStand[4] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-4.PNG");
	CC212VSGL::resizeImage(DioStand[4], 502, 542);
	DioStand[5] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-5.PNG");
	CC212VSGL::resizeImage(DioStand[5], 502, 542);
	DioStand[6] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-6.PNG");
	CC212VSGL::resizeImage(DioStand[6], 502, 542);
	DioStand[7] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-7.PNG");
	CC212VSGL::resizeImage(DioStand[7], 502, 542);
	DioStand[8] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-8.PNG");
	CC212VSGL::resizeImage(DioStand[8], 502, 542);
	DioStand[9] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-9.PNG");
	CC212VSGL::resizeImage(DioStand[9], 502, 542);
	DioStand[10] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-10.PNG");
	CC212VSGL::resizeImage(DioStand[10], 502, 542);
	DioStand[11] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-11.PNG");
	CC212VSGL::resizeImage(DioStand[11], 502, 542);
	DioStand[12] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-12.PNG");
	CC212VSGL::resizeImage(DioStand[12], 502, 542);
	DioStand[13] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-13.PNG");
	CC212VSGL::resizeImage(DioStand[13], 502, 542);
	DioStand[14] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-14.PNG");
	CC212VSGL::resizeImage(DioStand[14], 502, 542);
	DioStand[15] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-15.PNG");
	CC212VSGL::resizeImage(DioStand[15], 502, 542);
	DioStand[16] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-16.PNG");
	CC212VSGL::resizeImage(DioStand[16], 502, 542);
	DioStand[17] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-17.PNG");
	CC212VSGL::resizeImage(DioStand[17], 502, 542);
	DioStand[18] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-18.PNG");
	CC212VSGL::resizeImage(DioStand[18], 502, 542);
	DioStand[19] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-19.PNG");
	CC212VSGL::resizeImage(DioStand[19], 502, 542);
	DioStand[20] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-20.PNG");
	CC212VSGL::resizeImage(DioStand[20], 502, 542);
	DioStand[21] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-21.PNG");
	CC212VSGL::resizeImage(DioStand[21], 502, 542);
	DioStand[22] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-22.PNG");
	CC212VSGL::resizeImage(DioStand[22], 502, 542);
	DioStand[23] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-23.PNG");
	CC212VSGL::resizeImage(DioStand[23], 502, 542);
	DioStand[24] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-24.PNG");
	CC212VSGL::resizeImage(DioStand[24], 502, 542);
	DioStand[25] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-25.PNG");
	CC212VSGL::resizeImage(DioStand[25], 502, 542);
	DioStand[26] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-26.PNG");
	CC212VSGL::resizeImage(DioStand[26], 502, 542);
	DioStand[27] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-27.PNG");
	CC212VSGL::resizeImage(DioStand[27], 502, 542);
	DioStand[28] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-28.PNG");
	CC212VSGL::resizeImage(DioStand[28], 502, 542);
	DioStand[29] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-29.PNG");
	CC212VSGL::resizeImage(DioStand[29], 502, 542);
	DioStand[30] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-30.PNG");
	CC212VSGL::resizeImage(DioStand[30], 502, 542);
	DioStand[31] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-31.PNG");
	CC212VSGL::resizeImage(DioStand[31], 502, 542);
	DioStand[32] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-32.PNG");
	CC212VSGL::resizeImage(DioStand[32], 502, 542);
	DioStand[33] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-33.PNG");
	CC212VSGL::resizeImage(DioStand[33], 502, 542);
	DioStand[34] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-34.PNG");
	CC212VSGL::resizeImage(DioStand[34], 502, 542);
	DioStand[35] = CC212VSGL::loadImage("Dio\\Stand\\Dio-Stand-35.PNG");
	CC212VSGL::resizeImage(DioStand[35], 502, 542);
}
void ReadDioStandR() {
	DioStandR[0] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-0.PNG");
	CC212VSGL::resizeImage(DioStandR[0], 502, 542);
	DioStandR[1] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-1.PNG");
	CC212VSGL::resizeImage(DioStandR[1], 502, 542);
	DioStandR[2] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-2.PNG");
	CC212VSGL::resizeImage(DioStandR[2], 502, 542);
	DioStandR[3] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-3.PNG");
	CC212VSGL::resizeImage(DioStandR[3], 502, 542);
	DioStandR[4] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-4.PNG");
	CC212VSGL::resizeImage(DioStandR[4], 502, 542);
	DioStandR[5] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-5.PNG");
	CC212VSGL::resizeImage(DioStandR[5], 502, 542);
	DioStandR[6] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-6.PNG");
	CC212VSGL::resizeImage(DioStandR[6], 502, 542);
	DioStandR[7] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-7.PNG");
	CC212VSGL::resizeImage(DioStandR[7], 502, 542);
	DioStandR[8] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-8.PNG");
	CC212VSGL::resizeImage(DioStandR[8], 502, 542);
	DioStandR[9] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-9.PNG");
	CC212VSGL::resizeImage(DioStandR[9], 502, 542);
	DioStandR[10] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-10.PNG");
	CC212VSGL::resizeImage(DioStandR[10], 502, 542);
	DioStandR[11] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-11.PNG");
	CC212VSGL::resizeImage(DioStandR[11], 502, 542);
	DioStandR[12] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-12.PNG");
	CC212VSGL::resizeImage(DioStandR[12], 502, 542);
	DioStandR[13] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-13.PNG");
	CC212VSGL::resizeImage(DioStandR[13], 502, 542);
	DioStandR[14] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-14.PNG");
	CC212VSGL::resizeImage(DioStandR[14], 502, 542);
	DioStandR[15] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-15.PNG");
	CC212VSGL::resizeImage(DioStandR[15], 502, 542);
	DioStandR[16] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-16.PNG");
	CC212VSGL::resizeImage(DioStandR[16], 502, 542);
	DioStandR[17] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-17.PNG");
	CC212VSGL::resizeImage(DioStandR[17], 502, 542);
	DioStandR[18] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-18.PNG");
	CC212VSGL::resizeImage(DioStandR[18], 502, 542);
	DioStandR[19] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-19.PNG");
	CC212VSGL::resizeImage(DioStandR[19], 502, 542);
	DioStandR[20] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-20.PNG");
	CC212VSGL::resizeImage(DioStandR[20], 502, 542);
	DioStandR[21] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-21.PNG");
	CC212VSGL::resizeImage(DioStandR[21], 502, 542);
	DioStandR[22] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-22.PNG");
	CC212VSGL::resizeImage(DioStandR[22], 502, 542);
	DioStandR[23] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-23.PNG");
	CC212VSGL::resizeImage(DioStandR[23], 502, 542);
	DioStandR[24] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-24.PNG");
	CC212VSGL::resizeImage(DioStandR[24], 502, 542);
	DioStandR[25] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-25.PNG");
	CC212VSGL::resizeImage(DioStandR[25], 502, 542);
	DioStandR[26] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-26.PNG");
	CC212VSGL::resizeImage(DioStandR[26], 502, 542);
	DioStandR[27] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-27.PNG");
	CC212VSGL::resizeImage(DioStandR[27], 502, 542);
	DioStandR[28] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-28.PNG");
	CC212VSGL::resizeImage(DioStandR[28], 502, 542);
	DioStandR[29] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-29.PNG");
	CC212VSGL::resizeImage(DioStandR[29], 502, 542);
	DioStandR[30] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-30.PNG");
	CC212VSGL::resizeImage(DioStandR[30], 502, 542);
	DioStandR[31] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-31.PNG");
	CC212VSGL::resizeImage(DioStandR[31], 502, 542);
	DioStandR[32] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-32.PNG");
	CC212VSGL::resizeImage(DioStandR[32], 502, 542);
	DioStandR[33] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-33.PNG");
	CC212VSGL::resizeImage(DioStandR[33], 502, 542);
	DioStandR[34] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-34.PNG");
	CC212VSGL::resizeImage(DioStandR[34], 502, 542);
	DioStandR[35] = CC212VSGL::loadImage("DioR\\Stand\\Dio-Stand-35.PNG");
	CC212VSGL::resizeImage(DioStandR[35], 502, 542);
}
void ReadDioSuper() {
	DioSuper[0] = CC212VSGL::loadImage("Dio\\Super\\Dio-Super-0.PNG");
	CC212VSGL::resizeImage(DioSuper[0], 400, 530);
	DioSuper[1] = CC212VSGL::loadImage("Dio\\Super\\Dio-Super-1.PNG");
	CC212VSGL::resizeImage(DioSuper[1], 400, 530);
	DioSuper[2] = CC212VSGL::loadImage("Dio\\Super\\Dio-Super-2.PNG");
	CC212VSGL::resizeImage(DioSuper[2], 400, 530);
	DioSuper[3] = CC212VSGL::loadImage("Dio\\Super\\Dio-Super-3.PNG");
	CC212VSGL::resizeImage(DioSuper[3], 400, 530);
	DioSuper[4] = CC212VSGL::loadImage("Dio\\Super\\Dio-Super-4.PNG");
	CC212VSGL::resizeImage(DioSuper[4], 400, 530);
}
void ReadDioSuperR() {
	DioSuperR[0] = CC212VSGL::loadImage("DioR\\Super\\Dio-Super-0.PNG");
	CC212VSGL::resizeImage(DioSuperR[0], 400, 530);
	DioSuperR[1] = CC212VSGL::loadImage("DioR\\Super\\Dio-Super-1.PNG");
	CC212VSGL::resizeImage(DioSuperR[1], 400, 530);
	DioSuperR[2] = CC212VSGL::loadImage("DioR\\Super\\Dio-Super-2.PNG");
	CC212VSGL::resizeImage(DioSuperR[2], 400, 530);
	DioSuperR[3] = CC212VSGL::loadImage("DioR\\Super\\Dio-Super-3.PNG");
	CC212VSGL::resizeImage(DioSuperR[3], 400, 530);
	DioSuperR[4] = CC212VSGL::loadImage("DioR\\Super\\Dio-Super-4.PNG");
	CC212VSGL::resizeImage(DioSuperR[4], 400, 530);
}
void ReadJotaroStand() {
	JotaroStand[0] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-0.PNG");
	CC212VSGL::resizeImage(JotaroStand[0], 500, 542);
	JotaroStand[1] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-1.PNG");
	CC212VSGL::resizeImage(JotaroStand[1], 500, 542);
	JotaroStand[2] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-2.PNG");
	CC212VSGL::resizeImage(JotaroStand[2], 500, 542);
	JotaroStand[3] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-3.PNG");
	CC212VSGL::resizeImage(JotaroStand[3], 500, 542);
	JotaroStand[4] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-4.PNG");
	CC212VSGL::resizeImage(JotaroStand[4], 500, 542);
	JotaroStand[5] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-5.PNG");
	CC212VSGL::resizeImage(JotaroStand[5], 500, 542);
	JotaroStand[6] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-6.PNG");
	CC212VSGL::resizeImage(JotaroStand[6], 500, 542);
	JotaroStand[7] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-7.PNG");
	CC212VSGL::resizeImage(JotaroStand[7], 500, 542);
	JotaroStand[8] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-8.PNG");
	CC212VSGL::resizeImage(JotaroStand[8], 500, 542);
	JotaroStand[9] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-9.PNG");
	CC212VSGL::resizeImage(JotaroStand[9], 500, 542);
	JotaroStand[10] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-10.PNG");
	CC212VSGL::resizeImage(JotaroStand[10], 500, 542);
	JotaroStand[11] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-11.PNG");
	CC212VSGL::resizeImage(JotaroStand[11], 500, 542);
	JotaroStand[12] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-12.PNG");
	CC212VSGL::resizeImage(JotaroStand[12], 500, 542);
	JotaroStand[13] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-13.PNG");
	CC212VSGL::resizeImage(JotaroStand[13], 500, 542);
	JotaroStand[14] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-14.PNG");
	CC212VSGL::resizeImage(JotaroStand[14], 500, 542);
	JotaroStand[15] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-15.PNG");
	CC212VSGL::resizeImage(JotaroStand[15], 500, 542);
	JotaroStand[16] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-16.PNG");
	CC212VSGL::resizeImage(JotaroStand[16], 500, 542);
	JotaroStand[17] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-17.PNG");
	CC212VSGL::resizeImage(JotaroStand[17], 500, 542);
	JotaroStand[18] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-18.PNG");
	CC212VSGL::resizeImage(JotaroStand[18], 500, 542);
	JotaroStand[19] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-19.PNG");
	CC212VSGL::resizeImage(JotaroStand[19], 500, 542);
	JotaroStand[20] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-20.PNG");
	CC212VSGL::resizeImage(JotaroStand[20], 500, 542);
	JotaroStand[21] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-21.PNG");
	CC212VSGL::resizeImage(JotaroStand[21], 500, 542);
	JotaroStand[22] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-22.PNG");
	CC212VSGL::resizeImage(JotaroStand[22], 500, 542);
	JotaroStand[23] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-23.PNG");
	CC212VSGL::resizeImage(JotaroStand[23], 500, 542);
	JotaroStand[24] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-24.PNG");
	CC212VSGL::resizeImage(JotaroStand[24], 500, 542);
	JotaroStand[25] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-25.PNG");
	CC212VSGL::resizeImage(JotaroStand[25], 500, 542);
	JotaroStand[26] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-26.PNG");
	CC212VSGL::resizeImage(JotaroStand[26], 500, 542);
	JotaroStand[27] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-27.PNG");
	CC212VSGL::resizeImage(JotaroStand[27], 500, 542);
	JotaroStand[28] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-28.PNG");
	CC212VSGL::resizeImage(JotaroStand[28], 500, 542);
	JotaroStand[29] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-29.PNG");
	CC212VSGL::resizeImage(JotaroStand[29], 500, 542);
	JotaroStand[30] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-30.PNG");
	CC212VSGL::resizeImage(JotaroStand[30], 500, 542);
	JotaroStand[31] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-31.PNG");
	CC212VSGL::resizeImage(JotaroStand[31], 500, 542);
	JotaroStand[32] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-32.PNG");
	CC212VSGL::resizeImage(JotaroStand[32], 500, 542);
	JotaroStand[33] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-33.PNG");
	CC212VSGL::resizeImage(JotaroStand[33], 500, 542);
	JotaroStand[34] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-34.PNG");
	CC212VSGL::resizeImage(JotaroStand[34], 500, 542);
	JotaroStand[35] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-35.PNG");
	CC212VSGL::resizeImage(JotaroStand[35], 500, 542);
	JotaroStand[36] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-36.PNG");
	CC212VSGL::resizeImage(JotaroStand[36], 500, 542);
	JotaroStand[37] = CC212VSGL::loadImage("Jotaro\\Stand\\Jotaro-Stand-37.PNG");
	CC212VSGL::resizeImage(JotaroStand[37], 500, 542);
}
void ReadJotaroStandR() {
	JotaroStandR[0] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-0.PNG");
	CC212VSGL::resizeImage(JotaroStandR[0], 500, 542);
	JotaroStandR[1] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-1.PNG");
	CC212VSGL::resizeImage(JotaroStandR[1], 500, 542);
	JotaroStandR[2] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-2.PNG");
	CC212VSGL::resizeImage(JotaroStandR[2], 500, 542);
	JotaroStandR[3] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-3.PNG");
	CC212VSGL::resizeImage(JotaroStandR[3], 500, 542);
	JotaroStandR[4] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-4.PNG");
	CC212VSGL::resizeImage(JotaroStandR[4], 500, 542);
	JotaroStandR[5] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-5.PNG");
	CC212VSGL::resizeImage(JotaroStandR[5], 500, 542);
	JotaroStandR[6] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-6.PNG");
	CC212VSGL::resizeImage(JotaroStandR[6], 500, 542);
	JotaroStandR[7] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-7.PNG");
	CC212VSGL::resizeImage(JotaroStandR[7], 500, 542);
	JotaroStandR[8] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-8.PNG");
	CC212VSGL::resizeImage(JotaroStandR[8], 500, 542);
	JotaroStandR[9] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-9.PNG");
	CC212VSGL::resizeImage(JotaroStandR[9], 500, 542);
	JotaroStandR[10] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-10.PNG");
	CC212VSGL::resizeImage(JotaroStandR[10], 500, 542);
	JotaroStandR[11] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-11.PNG");
	CC212VSGL::resizeImage(JotaroStandR[11], 500, 542);
	JotaroStandR[12] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-12.PNG");
	CC212VSGL::resizeImage(JotaroStandR[12], 500, 542);
	JotaroStandR[13] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-13.PNG");
	CC212VSGL::resizeImage(JotaroStandR[13], 500, 542);
	JotaroStandR[14] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-14.PNG");
	CC212VSGL::resizeImage(JotaroStandR[14], 500, 542);
	JotaroStandR[15] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-15.PNG");
	CC212VSGL::resizeImage(JotaroStandR[15], 500, 542);
	JotaroStandR[16] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-16.PNG");
	CC212VSGL::resizeImage(JotaroStandR[16], 500, 542);
	JotaroStandR[17] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-17.PNG");
	CC212VSGL::resizeImage(JotaroStandR[17], 500, 542);
	JotaroStandR[18] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-18.PNG");
	CC212VSGL::resizeImage(JotaroStandR[18], 500, 542);
	JotaroStandR[19] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-19.PNG");
	CC212VSGL::resizeImage(JotaroStandR[19], 500, 542);
	JotaroStandR[20] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-20.PNG");
	CC212VSGL::resizeImage(JotaroStandR[20], 500, 542);
	JotaroStandR[21] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-21.PNG");
	CC212VSGL::resizeImage(JotaroStandR[21], 500, 542);
	JotaroStandR[22] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-22.PNG");
	CC212VSGL::resizeImage(JotaroStandR[22], 500, 542);
	JotaroStandR[23] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-23.PNG");
	CC212VSGL::resizeImage(JotaroStandR[23], 500, 542);
	JotaroStandR[24] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-24.PNG");
	CC212VSGL::resizeImage(JotaroStandR[24], 500, 542);
	JotaroStandR[25] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-25.PNG");
	CC212VSGL::resizeImage(JotaroStandR[25], 500, 542);
	JotaroStandR[26] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-26.PNG");
	CC212VSGL::resizeImage(JotaroStandR[26], 500, 542);
	JotaroStandR[27] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-27.PNG");
	CC212VSGL::resizeImage(JotaroStandR[27], 500, 542);
	JotaroStandR[28] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-28.PNG");
	CC212VSGL::resizeImage(JotaroStandR[28], 500, 542);
	JotaroStandR[29] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-29.PNG");
	CC212VSGL::resizeImage(JotaroStandR[29], 500, 542);
	JotaroStandR[30] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-30.PNG");
	CC212VSGL::resizeImage(JotaroStandR[30], 500, 542);
	JotaroStandR[31] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-31.PNG");
	CC212VSGL::resizeImage(JotaroStandR[31], 500, 542);
	JotaroStandR[32] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-32.PNG");
	CC212VSGL::resizeImage(JotaroStandR[32], 500, 542);
	JotaroStandR[33] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-33.PNG");
	CC212VSGL::resizeImage(JotaroStandR[33], 500, 542);
	JotaroStandR[34] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-34.PNG");
	CC212VSGL::resizeImage(JotaroStandR[34], 500, 542);
	JotaroStandR[35] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-35.PNG");
	CC212VSGL::resizeImage(JotaroStandR[35], 500, 542);
	JotaroStandR[36] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-36.PNG");
	CC212VSGL::resizeImage(JotaroStandR[36], 500, 542);
	JotaroStandR[37] = CC212VSGL::loadImage("JotaroR\\Stand\\Jotaro-Stand-37.PNG");
	CC212VSGL::resizeImage(JotaroStandR[37], 500, 542);
}
void ReadJotaroSuper() {
	JotaroSuper[0] = CC212VSGL::loadImage("Jotaro\\Super\\Jotaro-Super-0.PNG");
	CC212VSGL::resizeImage(JotaroSuper[0], 400, 530);
	JotaroSuper[1] = CC212VSGL::loadImage("Jotaro\\Super\\Jotaro-Super-1.PNG");
	CC212VSGL::resizeImage(JotaroSuper[1], 400, 530);
	JotaroSuper[2] = CC212VSGL::loadImage("Jotaro\\Super\\Jotaro-Super-2.PNG");
	CC212VSGL::resizeImage(JotaroSuper[2], 400, 530);
	JotaroSuper[3] = CC212VSGL::loadImage("Jotaro\\Super\\Jotaro-Super-3.PNG");
	CC212VSGL::resizeImage(JotaroSuper[3], 400, 530);
	JotaroSuper[4] = CC212VSGL::loadImage("Jotaro\\Super\\Jotaro-Super-4.PNG");
	CC212VSGL::resizeImage(JotaroSuper[4], 400, 530);
}
void ReadJotaroSuperR() {
	JotaroSuperR[0] = CC212VSGL::loadImage("JotaroR\\Super\\Jotaro-Super-0.PNG");
	CC212VSGL::resizeImage(JotaroSuperR[0], 400, 530);
	JotaroSuperR[1] = CC212VSGL::loadImage("JotaroR\\Super\\Jotaro-Super-1.PNG");
	CC212VSGL::resizeImage(JotaroSuperR[1], 400, 530);
	JotaroSuperR[2] = CC212VSGL::loadImage("JotaroR\\Super\\Jotaro-Super-2.PNG");
	CC212VSGL::resizeImage(JotaroSuperR[2], 400, 530);
	JotaroSuperR[3] = CC212VSGL::loadImage("JotaroR\\Super\\Jotaro-Super-3.PNG");
	CC212VSGL::resizeImage(JotaroSuperR[3], 400, 530);
	JotaroSuperR[4] = CC212VSGL::loadImage("JotaroR\\Super\\Jotaro-Super-4.PNG");
	CC212VSGL::resizeImage(JotaroSuperR[4], 400, 530);
}
void ReadSuperIcons() {
	SuperIcons[0] = CC212VSGL::loadImage("Dio\\Super\\Super-Icon.PNG");
	CC212VSGL::resizeImage(SuperIcons[0], 200, 265);
	SuperIcons[1] = CC212VSGL::loadImage("Jotaro\\Super\\Super-Icon.PNG");
	CC212VSGL::resizeImage(SuperIcons[1], 200, 265);
}
void ReadDioIntro() {
	DioIntro[0] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-0.PNG");
	CC212VSGL::resizeImage(DioIntro[0], 400, 530);
	DioIntro[1] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-1.PNG");
	CC212VSGL::resizeImage(DioIntro[1], 400, 530);
	DioIntro[2] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-2.PNG");
	CC212VSGL::resizeImage(DioIntro[2], 400, 530);
	DioIntro[3] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-3.PNG");
	CC212VSGL::resizeImage(DioIntro[3], 400, 530);
	DioIntro[4] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-4.PNG");
	CC212VSGL::resizeImage(DioIntro[4], 400, 530);
	DioIntro[5] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-5.PNG");
	CC212VSGL::resizeImage(DioIntro[5], 400, 530);
	DioIntro[6] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-6.PNG");
	CC212VSGL::resizeImage(DioIntro[6], 400, 530);
	DioIntro[7] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-7.PNG");
	CC212VSGL::resizeImage(DioIntro[7], 400, 530);
	DioIntro[8] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-8.PNG");
	CC212VSGL::resizeImage(DioIntro[8], 400, 530);
	DioIntro[9] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-9.PNG");
	CC212VSGL::resizeImage(DioIntro[9], 400, 530);
	DioIntro[10] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-10.PNG");
	CC212VSGL::resizeImage(DioIntro[10], 400, 530);
	DioIntro[11] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-11.PNG");
	CC212VSGL::resizeImage(DioIntro[11], 400, 530);
	DioIntro[12] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-12.PNG");
	CC212VSGL::resizeImage(DioIntro[12], 400, 530);
	DioIntro[13] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-13.PNG");
	CC212VSGL::resizeImage(DioIntro[13], 400, 530);
	DioIntro[14] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-14.PNG");
	CC212VSGL::resizeImage(DioIntro[14], 400, 530);
	DioIntro[15] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-15.PNG");
	CC212VSGL::resizeImage(DioIntro[15], 400, 530);
	DioIntro[16] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-16.PNG");
	CC212VSGL::resizeImage(DioIntro[16], 400, 530);
	DioIntro[17] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-17.PNG");
	CC212VSGL::resizeImage(DioIntro[17], 400, 530);
	DioIntro[18] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-18.PNG");
	CC212VSGL::resizeImage(DioIntro[18], 400, 530);
	DioIntro[19] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-19.PNG");
	CC212VSGL::resizeImage(DioIntro[19], 400, 530);
	DioIntro[20] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-20.PNG");
	CC212VSGL::resizeImage(DioIntro[20], 400, 530);
	DioIntro[21] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-21.PNG");
	CC212VSGL::resizeImage(DioIntro[21], 400, 530);
	DioIntro[22] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-22.PNG");
	CC212VSGL::resizeImage(DioIntro[22], 400, 530);
	DioIntro[23] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-23.PNG");
	CC212VSGL::resizeImage(DioIntro[23], 400, 530);
	DioIntro[24] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-24.PNG");
	CC212VSGL::resizeImage(DioIntro[24], 400, 530);
	DioIntro[25] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-25.PNG");
	CC212VSGL::resizeImage(DioIntro[25], 400, 530);
	DioIntro[26] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-26.PNG");
	CC212VSGL::resizeImage(DioIntro[26], 400, 530);
	DioIntro[27] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-27.PNG");
	CC212VSGL::resizeImage(DioIntro[27], 400, 530);
	DioIntro[28] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-28.PNG");
	CC212VSGL::resizeImage(DioIntro[28], 400, 530);
	DioIntro[29] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-29.PNG");
	CC212VSGL::resizeImage(DioIntro[29], 400, 530);
	DioIntro[30] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-30.PNG");
	CC212VSGL::resizeImage(DioIntro[30], 400, 530);
	DioIntro[31] = CC212VSGL::loadImage("Dio\\Intro\\Dio-Intro-31.PNG");
	CC212VSGL::resizeImage(DioIntro[31], 400, 530);
}
void ReadDioS() {
	DioS[0] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-0.PNG");
	CC212VSGL::resizeImage(DioS[0], 400, 530);
	DioS[1] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-1.PNG");
	CC212VSGL::resizeImage(DioS[1], 400, 530);
	DioS[2] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-2.PNG");
	CC212VSGL::resizeImage(DioS[2], 400, 530);
	DioS[3] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-3.PNG");
	CC212VSGL::resizeImage(DioS[3], 400, 530);
	DioS[4] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-4.PNG");
	CC212VSGL::resizeImage(DioS[4], 400, 530);
	DioS[5] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-5.PNG");
	CC212VSGL::resizeImage(DioS[5], 400, 530);
	DioS[6] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-6.PNG");
	CC212VSGL::resizeImage(DioS[6], 400, 530);
	DioS[7] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-7.PNG");
	CC212VSGL::resizeImage(DioS[7], 400, 530);
	DioS[8] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-8.PNG");
	CC212VSGL::resizeImage(DioS[8], 400, 530);
	DioS[9] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-9.PNG");
	CC212VSGL::resizeImage(DioS[9], 400, 530);
	DioS[10] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-10.PNG");
	CC212VSGL::resizeImage(DioS[10], 400, 530);
	DioS[11] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-11.PNG");
	CC212VSGL::resizeImage(DioS[11], 400, 530);
	DioS[12] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-12.PNG");
	CC212VSGL::resizeImage(DioS[12], 400, 530);
	DioS[13] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-13.PNG");
	CC212VSGL::resizeImage(DioS[13], 400, 530);
	DioS[14] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-14.PNG");
	CC212VSGL::resizeImage(DioS[14], 400, 530);
	DioS[15] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-15.PNG");
	CC212VSGL::resizeImage(DioS[15], 400, 530);
	DioS[16] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-16.PNG");
	CC212VSGL::resizeImage(DioS[16], 400, 530);
	DioS[17] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-17.PNG");
	CC212VSGL::resizeImage(DioS[17], 400, 530);
	DioS[18] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-18.PNG");
	CC212VSGL::resizeImage(DioS[18], 400, 530);
	DioS[19] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-19.PNG");
	CC212VSGL::resizeImage(DioS[19], 400, 530);
	DioS[20] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-20.PNG");
	CC212VSGL::resizeImage(DioS[20], 400, 530);
	DioS[21] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-21.PNG");
	CC212VSGL::resizeImage(DioS[21], 400, 530);
	DioS[22] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-22.PNG");
	CC212VSGL::resizeImage(DioS[22], 400, 530);
	DioS[23] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-23.PNG");
	CC212VSGL::resizeImage(DioS[23], 400, 530);
	DioS[24] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-24.PNG");
	CC212VSGL::resizeImage(DioS[24], 400, 530);
	DioS[25] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-25.PNG");
	CC212VSGL::resizeImage(DioS[25], 400, 530);
	DioS[26] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-26.PNG");
	CC212VSGL::resizeImage(DioS[26], 400, 530);
	DioS[27] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-27.PNG");
	CC212VSGL::resizeImage(DioS[27], 400, 530);
	DioS[28] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-28.PNG");
	CC212VSGL::resizeImage(DioS[28], 400, 530);
	DioS[29] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-29.PNG");
	CC212VSGL::resizeImage(DioS[29], 400, 530);
	DioS[30] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-30.PNG");
	CC212VSGL::resizeImage(DioS[30], 400, 530);
	DioS[31] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-31.PNG");
	CC212VSGL::resizeImage(DioS[31], 400, 530);
	DioS[32] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-32.PNG");
	CC212VSGL::resizeImage(DioS[32], 400, 530);
	DioS[33] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-33.PNG");
	CC212VSGL::resizeImage(DioS[33], 400, 530);
	DioS[34] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-34.PNG");
	CC212VSGL::resizeImage(DioS[34], 400, 530);
	DioS[35] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-35.PNG");
	CC212VSGL::resizeImage(DioS[35], 400, 530);
	DioS[36] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-36.PNG");
	CC212VSGL::resizeImage(DioS[36], 400, 530);
	DioS[37] = CC212VSGL::loadImage("Dio\\Stance\\Dio-Stance-37.PNG");
	CC212VSGL::resizeImage(DioS[37], 400, 530);
}
void ReadDioSR() {
	DioSR[0] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-0.PNG");
	CC212VSGL::resizeImage(DioSR[0], 400, 530);
	DioSR[1] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-1.PNG");
	CC212VSGL::resizeImage(DioSR[1], 400, 530);
	DioSR[2] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-2.PNG");
	CC212VSGL::resizeImage(DioSR[2], 400, 530);
	DioSR[3] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-3.PNG");
	CC212VSGL::resizeImage(DioSR[3], 400, 530);
	DioSR[4] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-4.PNG");
	CC212VSGL::resizeImage(DioSR[4], 400, 530);
	DioSR[5] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-5.PNG");
	CC212VSGL::resizeImage(DioSR[5], 400, 530);
	DioSR[6] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-6.PNG");
	CC212VSGL::resizeImage(DioSR[6], 400, 530);
	DioSR[7] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-7.PNG");
	CC212VSGL::resizeImage(DioSR[7], 400, 530);
	DioSR[8] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-8.PNG");
	CC212VSGL::resizeImage(DioSR[8], 400, 530);
	DioSR[9] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-9.PNG");
	CC212VSGL::resizeImage(DioSR[9], 400, 530);
	DioSR[10] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-10.PNG");
	CC212VSGL::resizeImage(DioSR[10], 400, 530);
	DioSR[11] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-11.PNG");
	CC212VSGL::resizeImage(DioSR[11], 400, 530);
	DioSR[12] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-12.PNG");
	CC212VSGL::resizeImage(DioSR[12], 400, 530);
	DioSR[13] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-13.PNG");
	CC212VSGL::resizeImage(DioSR[13], 400, 530);
	DioSR[14] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-14.PNG");
	CC212VSGL::resizeImage(DioSR[14], 400, 530);
	DioSR[15] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-15.PNG");
	CC212VSGL::resizeImage(DioSR[15], 400, 530);
	DioSR[16] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-16.PNG");
	CC212VSGL::resizeImage(DioSR[16], 400, 530);
	DioSR[17] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-17.PNG");
	CC212VSGL::resizeImage(DioSR[17], 400, 530);
	DioSR[18] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-18.PNG");
	CC212VSGL::resizeImage(DioSR[18], 400, 530);
	DioSR[19] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-19.PNG");
	CC212VSGL::resizeImage(DioSR[19], 400, 530);
	DioSR[20] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-20.PNG");
	CC212VSGL::resizeImage(DioSR[20], 400, 530);
	DioSR[21] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-21.PNG");
	CC212VSGL::resizeImage(DioSR[21], 400, 530);
	DioSR[22] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-22.PNG");
	CC212VSGL::resizeImage(DioSR[22], 400, 530);
	DioSR[23] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-23.PNG");
	CC212VSGL::resizeImage(DioSR[23], 400, 530);
	DioSR[24] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-24.PNG");
	CC212VSGL::resizeImage(DioSR[24], 400, 530);
	DioSR[25] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-25.PNG");
	CC212VSGL::resizeImage(DioSR[25], 400, 530);
	DioSR[26] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-26.PNG");
	CC212VSGL::resizeImage(DioSR[26], 400, 530);
	DioSR[27] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-27.PNG");
	CC212VSGL::resizeImage(DioSR[27], 400, 530);
	DioSR[28] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-28.PNG");
	CC212VSGL::resizeImage(DioSR[28], 400, 530);
	DioSR[29] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-29.PNG");
	CC212VSGL::resizeImage(DioSR[29], 400, 530);
	DioSR[30] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-30.PNG");
	CC212VSGL::resizeImage(DioSR[30], 400, 530);
	DioSR[31] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-31.PNG");
	CC212VSGL::resizeImage(DioSR[31], 400, 530);
	DioSR[32] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-32.PNG");
	CC212VSGL::resizeImage(DioSR[32], 400, 530);
	DioSR[33] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-33.PNG");
	CC212VSGL::resizeImage(DioSR[33], 400, 530);
	DioSR[34] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-34.PNG");
	CC212VSGL::resizeImage(DioSR[34], 400, 530);
	DioSR[35] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-35.PNG");
	CC212VSGL::resizeImage(DioSR[35], 400, 530);
	DioSR[36] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-36.PNG");
	CC212VSGL::resizeImage(DioSR[36], 400, 530);
	DioSR[37] = CC212VSGL::loadImage("DioR\\Stance\\Dio-Stance-37.PNG");
	CC212VSGL::resizeImage(DioSR[37], 400, 530);
}
void ReadDioH() {
	DioH[0] = CC212VSGL::loadImage("Dio\\Hit\\Dio-Hit-0.PNG");
	CC212VSGL::resizeImage(DioH[0], 400, 530);
	DioH[1] = CC212VSGL::loadImage("Dio\\Hit\\Dio-Hit-1.PNG");
	CC212VSGL::resizeImage(DioH[1], 400, 530);
	DioH[2] = CC212VSGL::loadImage("Dio\\Hit\\Dio-Hit-2.PNG");
	CC212VSGL::resizeImage(DioH[2], 400, 530);
	DioH[3] = CC212VSGL::loadImage("Dio\\Hit\\Dio-Hit-3.PNG");
	CC212VSGL::resizeImage(DioH[3], 400, 530);
	DioH[4] = CC212VSGL::loadImage("Dio\\Hit\\Dio-Hit-4.PNG");
	CC212VSGL::resizeImage(DioH[4], 400, 530);
	DioH[5] = CC212VSGL::loadImage("Dio\\Hit\\Dio-Hit-5.PNG");
	CC212VSGL::resizeImage(DioH[5], 400, 530);
}
void ReadDioHR() {
	DioHR[0] = CC212VSGL::loadImage("DioR\\Hit\\Dio-Hit-0.PNG");
	CC212VSGL::resizeImage(DioHR[0], 400, 530);
	DioHR[1] = CC212VSGL::loadImage("DioR\\Hit\\Dio-Hit-1.PNG");
	CC212VSGL::resizeImage(DioHR[1], 400, 530);
	DioHR[2] = CC212VSGL::loadImage("DioR\\Hit\\Dio-Hit-2.PNG");
	CC212VSGL::resizeImage(DioHR[2], 400, 530);
	DioHR[3] = CC212VSGL::loadImage("DioR\\Hit\\Dio-Hit-3.PNG");
	CC212VSGL::resizeImage(DioHR[3], 400, 530);
	DioHR[4] = CC212VSGL::loadImage("DioR\\Hit\\Dio-Hit-4.PNG");
	CC212VSGL::resizeImage(DioHR[4], 400, 530);
	DioHR[5] = CC212VSGL::loadImage("DioR\\Hit\\Dio-Hit-5.PNG");
	CC212VSGL::resizeImage(DioHR[5], 400, 530);
}
void ReadDioJ() {
	DioJ[0] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-0.PNG");
	CC212VSGL::resizeImage(DioJ[0], 400, 530);
	DioJ[1] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-1.PNG");
	CC212VSGL::resizeImage(DioJ[1], 400, 530);
	DioJ[2] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-2.PNG");
	CC212VSGL::resizeImage(DioJ[2], 400, 530);
	DioJ[3] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-3.PNG");
	CC212VSGL::resizeImage(DioJ[3], 400, 530);
	DioJ[4] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-4.PNG");
	CC212VSGL::resizeImage(DioJ[4], 400, 530);
	DioJ[5] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-5.PNG");
	CC212VSGL::resizeImage(DioJ[5], 400, 530);
	DioJ[6] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-6.PNG");
	CC212VSGL::resizeImage(DioJ[6], 400, 530);
	DioJ[7] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-7.PNG");
	CC212VSGL::resizeImage(DioJ[7], 400, 530);
	DioJ[8] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-8.PNG");
	CC212VSGL::resizeImage(DioJ[8], 400, 530);
	DioJ[9] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-9.PNG");
	CC212VSGL::resizeImage(DioJ[9], 400, 530);
	DioJ[10] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-10.PNG");
	CC212VSGL::resizeImage(DioJ[10], 400, 530);
	DioJ[11] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-11.PNG");
	CC212VSGL::resizeImage(DioJ[11], 400, 530);
	DioJ[12] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-12.PNG");
	CC212VSGL::resizeImage(DioJ[12], 400, 530);
	DioJ[13] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-13.PNG");
	CC212VSGL::resizeImage(DioJ[13], 400, 530);
	DioJ[14] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-14.PNG");
	CC212VSGL::resizeImage(DioJ[14], 400, 530);
	DioJ[15] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-15.PNG");
	CC212VSGL::resizeImage(DioJ[15], 400, 530);
	DioJ[16] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-16.PNG");
	CC212VSGL::resizeImage(DioJ[16], 400, 530);
	DioJ[17] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-17.PNG");
	CC212VSGL::resizeImage(DioJ[17], 400, 530);
	DioJ[18] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-18.PNG");
	CC212VSGL::resizeImage(DioJ[18], 400, 530);
	DioJ[19] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-19.PNG");
	CC212VSGL::resizeImage(DioJ[19], 400, 530);
	DioJ[20] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-20.PNG");
	CC212VSGL::resizeImage(DioJ[20], 400, 530);
	DioJ[21] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-21.PNG");
	CC212VSGL::resizeImage(DioJ[21], 400, 530);
	DioJ[22] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-22.PNG");
	CC212VSGL::resizeImage(DioJ[22], 400, 530);
	DioJ[23] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-23.PNG");
	CC212VSGL::resizeImage(DioJ[23], 400, 530);
	DioJ[24] = CC212VSGL::loadImage("Dio\\Jump\\Dio-Jump-24.PNG");
	CC212VSGL::resizeImage(DioJ[24], 400, 530);
}
void ReadDioJR() {
	DioJR[0] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-0.PNG");
	CC212VSGL::resizeImage(DioJR[0], 400, 530);
	DioJR[1] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-1.PNG");
	CC212VSGL::resizeImage(DioJR[1], 400, 530);
	DioJR[2] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-2.PNG");
	CC212VSGL::resizeImage(DioJR[2], 400, 530);
	DioJR[3] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-3.PNG");
	CC212VSGL::resizeImage(DioJR[3], 400, 530);
	DioJR[4] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-4.PNG");
	CC212VSGL::resizeImage(DioJR[4], 400, 530);
	DioJR[5] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-5.PNG");
	CC212VSGL::resizeImage(DioJR[5], 400, 530);
	DioJR[6] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-6.PNG");
	CC212VSGL::resizeImage(DioJR[6], 400, 530);
	DioJR[7] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-7.PNG");
	CC212VSGL::resizeImage(DioJR[7], 400, 530);
	DioJR[8] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-8.PNG");
	CC212VSGL::resizeImage(DioJR[8], 400, 530);
	DioJR[9] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-9.PNG");
	CC212VSGL::resizeImage(DioJR[9], 400, 530);
	DioJR[10] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-10.PNG");
	CC212VSGL::resizeImage(DioJR[10], 400, 530);
	DioJR[11] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-11.PNG");
	CC212VSGL::resizeImage(DioJR[11], 400, 530);
	DioJR[12] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-12.PNG");
	CC212VSGL::resizeImage(DioJR[12], 400, 530);
	DioJR[13] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-13.PNG");
	CC212VSGL::resizeImage(DioJR[13], 400, 530);
	DioJR[14] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-14.PNG");
	CC212VSGL::resizeImage(DioJR[14], 400, 530);
	DioJR[15] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-15.PNG");
	CC212VSGL::resizeImage(DioJR[15], 400, 530);
	DioJR[16] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-16.PNG");
	CC212VSGL::resizeImage(DioJR[16], 400, 530);
	DioJR[17] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-17.PNG");
	CC212VSGL::resizeImage(DioJR[17], 400, 530);
	DioJR[18] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-18.PNG");
	CC212VSGL::resizeImage(DioJR[18], 400, 530);
	DioJR[19] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-19.PNG");
	CC212VSGL::resizeImage(DioJR[19], 400, 530);
	DioJR[20] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-20.PNG");
	CC212VSGL::resizeImage(DioJR[20], 400, 530);
	DioJR[21] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-21.PNG");
	CC212VSGL::resizeImage(DioJR[21], 400, 530);
	DioJR[22] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-22.PNG");
	CC212VSGL::resizeImage(DioJR[22], 400, 530);
	DioJR[23] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-23.PNG");
	CC212VSGL::resizeImage(DioJR[23], 400, 530);
	DioJR[24] = CC212VSGL::loadImage("DioR\\Jump\\Dio-Jump-24.PNG");
	CC212VSGL::resizeImage(DioJR[24], 400, 530);
}
void ReadDioAL() {
	DioAL[0] = CC212VSGL::loadImage("Dio\\Attack Light\\Dio-AttackL-0.PNG");
	CC212VSGL::resizeImage(DioAL[0], 400, 530);
	DioAL[1] = CC212VSGL::loadImage("Dio\\Attack Light\\Dio-AttackL-1.PNG");
	CC212VSGL::resizeImage(DioAL[1], 400, 530);
	DioAL[2] = CC212VSGL::loadImage("Dio\\Attack Light\\Dio-AttackL-2.PNG");
	CC212VSGL::resizeImage(DioAL[2], 400, 530);
	DioAL[3] = CC212VSGL::loadImage("Dio\\Attack Light\\Dio-AttackL-3.PNG");
	CC212VSGL::resizeImage(DioAL[3], 400, 530);
	DioAL[4] = CC212VSGL::loadImage("Dio\\Attack Light\\Dio-AttackL-4.PNG");
	CC212VSGL::resizeImage(DioAL[4], 400, 530);
	DioAL[5] = CC212VSGL::loadImage("Dio\\Attack Light\\Dio-AttackL-5.PNG");
	CC212VSGL::resizeImage(DioAL[5], 400, 530);
	DioAL[6] = CC212VSGL::loadImage("Dio\\Attack Light\\Dio-AttackL-6.PNG");
	CC212VSGL::resizeImage(DioAL[6], 400, 530);
}
void ReadDioALR() {
	DioALR[0] = CC212VSGL::loadImage("DioR\\Attack Light\\Dio-AttackL-0.PNG");
	CC212VSGL::resizeImage(DioALR[0], 400, 530);
	DioALR[1] = CC212VSGL::loadImage("DioR\\Attack Light\\Dio-AttackL-1.PNG");
	CC212VSGL::resizeImage(DioALR[1], 400, 530);
	DioALR[2] = CC212VSGL::loadImage("DioR\\Attack Light\\Dio-AttackL-2.PNG");
	CC212VSGL::resizeImage(DioALR[2], 400, 530);
	DioALR[3] = CC212VSGL::loadImage("DioR\\Attack Light\\Dio-AttackL-3.PNG");
	CC212VSGL::resizeImage(DioALR[3], 400, 530);
	DioALR[4] = CC212VSGL::loadImage("DioR\\Attack Light\\Dio-AttackL-4.PNG");
	CC212VSGL::resizeImage(DioALR[4], 400, 530);
	DioALR[5] = CC212VSGL::loadImage("DioR\\Attack Light\\Dio-AttackL-5.PNG");
	CC212VSGL::resizeImage(DioALR[5], 400, 530);
	DioALR[6] = CC212VSGL::loadImage("DioR\\Attack Light\\Dio-AttackL-6.PNG");
	CC212VSGL::resizeImage(DioALR[6], 400, 530);
}
void ReadDioAH() {
	DioAH[0] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-0.PNG");
	CC212VSGL::resizeImage(DioAH[0], 400, 530);
	DioAH[1] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-1.PNG");
	CC212VSGL::resizeImage(DioAH[1], 400, 530);
	DioAH[2] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-2.PNG");
	CC212VSGL::resizeImage(DioAH[2], 400, 530);
	DioAH[3] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-3.PNG");
	CC212VSGL::resizeImage(DioAH[3], 400, 530);
	DioAH[4] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-4.PNG");
	CC212VSGL::resizeImage(DioAH[4], 400, 530);
	DioAH[5] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-5.PNG");
	CC212VSGL::resizeImage(DioAH[5], 400, 530);
	DioAH[6] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-6.PNG");
	CC212VSGL::resizeImage(DioAH[6], 400, 530);
	DioAH[7] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-7.PNG");
	CC212VSGL::resizeImage(DioAH[7], 400, 530);
	DioAH[8] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-8.PNG");
	CC212VSGL::resizeImage(DioAH[8], 400, 530);
	DioAH[9] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-9.PNG");
	CC212VSGL::resizeImage(DioAH[9], 400, 530);
	DioAH[10] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-10.PNG");
	CC212VSGL::resizeImage(DioAH[10], 400, 530);
	DioAH[11] = CC212VSGL::loadImage("Dio\\Attack Heavy\\Dio-AttackH-11.PNG");
	CC212VSGL::resizeImage(DioAH[11], 400, 530);
}
void ReadDioAHR() {
	DioAHR[0] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-0.PNG");
	CC212VSGL::resizeImage(DioAHR[0], 400, 530);
	DioAHR[1] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-1.PNG");
	CC212VSGL::resizeImage(DioAHR[1], 400, 530);
	DioAHR[2] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-2.PNG");
	CC212VSGL::resizeImage(DioAHR[2], 400, 530);
	DioAHR[3] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-3.PNG");
	CC212VSGL::resizeImage(DioAHR[3], 400, 530);
	DioAHR[4] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-4.PNG");
	CC212VSGL::resizeImage(DioAHR[4], 400, 530);
	DioAHR[5] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-5.PNG");
	CC212VSGL::resizeImage(DioAHR[5], 400, 530);
	DioAHR[6] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-6.PNG");
	CC212VSGL::resizeImage(DioAHR[6], 400, 530);
	DioAHR[7] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-7.PNG");
	CC212VSGL::resizeImage(DioAHR[7], 400, 530);
	DioAHR[8] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-8.PNG");
	CC212VSGL::resizeImage(DioAHR[8], 400, 530);
	DioAHR[9] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-9.PNG");
	CC212VSGL::resizeImage(DioAHR[9], 400, 530);
	DioAHR[10] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-10.PNG");
	CC212VSGL::resizeImage(DioAHR[10], 400, 530);
	DioAHR[11] = CC212VSGL::loadImage("DioR\\Attack Heavy\\Dio-AttackH-11.PNG");
	CC212VSGL::resizeImage(DioAHR[11], 400, 530);
}
void ReadDioWB() {
	DioWB[0] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-0.PNG");
	CC212VSGL::resizeImage(DioWB[0], 400, 530);
	DioWB[1] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-1.PNG");
	CC212VSGL::resizeImage(DioWB[1], 400, 530);
	DioWB[2] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-2.PNG");
	CC212VSGL::resizeImage(DioWB[2], 400, 530);
	DioWB[3] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-3.PNG");
	CC212VSGL::resizeImage(DioWB[3], 400, 530);
	DioWB[4] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-4.PNG");
	CC212VSGL::resizeImage(DioWB[4], 400, 530);
	DioWB[5] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-5.PNG");
	CC212VSGL::resizeImage(DioWB[5], 400, 530);
	DioWB[6] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-6.PNG");
	CC212VSGL::resizeImage(DioWB[6], 400, 530);
	DioWB[7] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-7.PNG");
	CC212VSGL::resizeImage(DioWB[7], 400, 530);
	DioWB[8] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-8.PNG");
	CC212VSGL::resizeImage(DioWB[8], 400, 530);
	DioWB[9] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-9.PNG");
	CC212VSGL::resizeImage(DioWB[9], 400, 530);
	DioWB[10] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-10.PNG");
	CC212VSGL::resizeImage(DioWB[10], 400, 530);
	DioWB[11] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-11.PNG");
	CC212VSGL::resizeImage(DioWB[11], 400, 530);
	DioWB[12] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-12.PNG");
	CC212VSGL::resizeImage(DioWB[12], 400, 530);
	DioWB[13] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-13.PNG");
	CC212VSGL::resizeImage(DioWB[13], 400, 530);
	DioWB[14] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-14.PNG");
	CC212VSGL::resizeImage(DioWB[14], 400, 530);
	DioWB[15] = CC212VSGL::loadImage("Dio\\Walking Backwards\\Dio-WB-15.PNG");
	CC212VSGL::resizeImage(DioWB[15], 400, 530);
}
void ReadDioWBR() {
	DioWBR[0] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-0.PNG");
	CC212VSGL::resizeImage(DioWBR[0], 400, 530);
	DioWBR[1] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-1.PNG");
	CC212VSGL::resizeImage(DioWBR[1], 400, 530);
	DioWBR[2] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-2.PNG");
	CC212VSGL::resizeImage(DioWBR[2], 400, 530);
	DioWBR[3] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-3.PNG");
	CC212VSGL::resizeImage(DioWBR[3], 400, 530);
	DioWBR[4] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-4.PNG");
	CC212VSGL::resizeImage(DioWBR[4], 400, 530);
	DioWBR[5] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-5.PNG");
	CC212VSGL::resizeImage(DioWBR[5], 400, 530);
	DioWBR[6] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-6.PNG");
	CC212VSGL::resizeImage(DioWBR[6], 400, 530);
	DioWBR[7] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-7.PNG");
	CC212VSGL::resizeImage(DioWBR[7], 400, 530);
	DioWBR[8] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-8.PNG");
	CC212VSGL::resizeImage(DioWBR[8], 400, 530);
	DioWBR[9] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-9.PNG");
	CC212VSGL::resizeImage(DioWBR[9], 400, 530);
	DioWBR[10] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-10.PNG");
	CC212VSGL::resizeImage(DioWBR[10], 400, 530);
	DioWBR[11] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-11.PNG");
	CC212VSGL::resizeImage(DioWBR[11], 400, 530);
	DioWBR[12] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-12.PNG");
	CC212VSGL::resizeImage(DioWBR[12], 400, 530);
	DioWBR[13] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-13.PNG");
	CC212VSGL::resizeImage(DioWBR[13], 400, 530);
	DioWBR[14] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-14.PNG");
	CC212VSGL::resizeImage(DioWBR[14], 400, 530);
	DioWBR[15] = CC212VSGL::loadImage("DioR\\Walking Backwards\\Dio-WB-15.PNG");
	CC212VSGL::resizeImage(DioWBR[15], 400, 530);
}
void ReadDioWF() {
	DioWF[0] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-0.PNG");
	CC212VSGL::resizeImage(DioWF[0], 400, 530);
	DioWF[1] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-1.PNG");
	CC212VSGL::resizeImage(DioWF[1], 400, 530);
	DioWF[2] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-2.PNG");
	CC212VSGL::resizeImage(DioWF[2], 400, 530);
	DioWF[3] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-3.PNG");
	CC212VSGL::resizeImage(DioWF[3], 400, 530);
	DioWF[4] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-4.PNG");
	CC212VSGL::resizeImage(DioWF[4], 400, 530);
	DioWF[5] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-5.PNG");
	CC212VSGL::resizeImage(DioWF[5], 400, 530);
	DioWF[6] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-6.PNG");
	CC212VSGL::resizeImage(DioWF[6], 400, 530);
	DioWF[7] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-7.PNG");
	CC212VSGL::resizeImage(DioWF[7], 400, 530);
	DioWF[8] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-8.PNG");
	CC212VSGL::resizeImage(DioWF[8], 400, 530);
	DioWF[9] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-9.PNG");
	CC212VSGL::resizeImage(DioWF[9], 400, 530);
	DioWF[10] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-10.PNG");
	CC212VSGL::resizeImage(DioWF[10], 400, 530);
	DioWF[11] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-11.PNG");
	CC212VSGL::resizeImage(DioWF[11], 400, 530);
	DioWF[12] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-12.PNG");
	CC212VSGL::resizeImage(DioWF[12], 400, 530);
	DioWF[13] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-13.PNG");
	CC212VSGL::resizeImage(DioWF[13], 400, 530);
	DioWF[14] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-14.PNG");
	CC212VSGL::resizeImage(DioWF[14], 400, 530);
	DioWF[15] = CC212VSGL::loadImage("Dio\\Walking Forward\\Dio-WF-15.PNG");
	CC212VSGL::resizeImage(DioWF[15], 400, 530);
}
void ReadDioWFR() {
	DioWFR[0] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-0.PNG");
	CC212VSGL::resizeImage(DioWFR[0], 400, 530);
	DioWFR[1] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-1.PNG");
	CC212VSGL::resizeImage(DioWFR[1], 400, 530);
	DioWFR[2] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-2.PNG");
	CC212VSGL::resizeImage(DioWFR[2], 400, 530);
	DioWFR[3] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-3.PNG");
	CC212VSGL::resizeImage(DioWFR[3], 400, 530);
	DioWFR[4] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-4.PNG");
	CC212VSGL::resizeImage(DioWFR[4], 400, 530);
	DioWFR[5] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-5.PNG");
	CC212VSGL::resizeImage(DioWFR[5], 400, 530);
	DioWFR[6] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-6.PNG");
	CC212VSGL::resizeImage(DioWFR[6], 400, 530);
	DioWFR[7] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-7.PNG");
	CC212VSGL::resizeImage(DioWFR[7], 400, 530);
	DioWFR[8] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-8.PNG");
	CC212VSGL::resizeImage(DioWFR[8], 400, 530);
	DioWFR[9] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-9.PNG");
	CC212VSGL::resizeImage(DioWFR[9], 400, 530);
	DioWFR[10] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-10.PNG");
	CC212VSGL::resizeImage(DioWFR[10], 400, 530);
	DioWFR[11] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-11.PNG");
	CC212VSGL::resizeImage(DioWFR[11], 400, 530);
	DioWFR[12] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-12.PNG");
	CC212VSGL::resizeImage(DioWFR[12], 400, 530);
	DioWFR[13] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-13.PNG");
	CC212VSGL::resizeImage(DioWFR[13], 400, 530);
	DioWFR[14] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-14.PNG");
	CC212VSGL::resizeImage(DioWFR[14], 400, 530);
	DioWFR[15] = CC212VSGL::loadImage("DioR\\Walking Forward\\Dio-WF-15.PNG");
	CC212VSGL::resizeImage(DioWFR[15], 400, 530);
}
void ReadDioHealth() {
	DioHealth[0] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-0.PNG");
	CC212VSGL::resizeImage(DioHealth[0], 650, 200);
	DioHealth[1] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-1.PNG");
	CC212VSGL::resizeImage(DioHealth[1], 650, 200);
	DioHealth[2] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-2.PNG");
	CC212VSGL::resizeImage(DioHealth[2], 650, 200);
	DioHealth[3] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-3.PNG");
	CC212VSGL::resizeImage(DioHealth[3], 650, 200);
	DioHealth[4] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-4.PNG");
	CC212VSGL::resizeImage(DioHealth[4], 650, 200);
	DioHealth[5] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-5.PNG");
	CC212VSGL::resizeImage(DioHealth[5], 650, 200);
	DioHealth[6] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-6.PNG");
	CC212VSGL::resizeImage(DioHealth[6], 650, 200);
	DioHealth[7] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-7.PNG");
	CC212VSGL::resizeImage(DioHealth[7], 650, 200);
	DioHealth[8] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-8.PNG");
	CC212VSGL::resizeImage(DioHealth[8], 650, 200);
	DioHealth[9] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-9.PNG");
	CC212VSGL::resizeImage(DioHealth[9], 650, 200);
	DioHealth[10] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-10.PNG");
	CC212VSGL::resizeImage(DioHealth[10], 650, 200);
	DioHealth[11] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-11.PNG");
	CC212VSGL::resizeImage(DioHealth[11], 650, 200);
	DioHealth[12] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-12.PNG");
	CC212VSGL::resizeImage(DioHealth[12], 650, 200);
	DioHealth[13] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-13.PNG");
	CC212VSGL::resizeImage(DioHealth[13], 650, 200);
	DioHealth[14] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-14.PNG");
	CC212VSGL::resizeImage(DioHealth[14], 650, 200);
	DioHealth[15] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-15.PNG");
	CC212VSGL::resizeImage(DioHealth[15], 650, 200);
	DioHealth[16] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-16.PNG");
	CC212VSGL::resizeImage(DioHealth[16], 650, 200);
	DioHealth[17] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-17.PNG");
	CC212VSGL::resizeImage(DioHealth[17], 650, 200);
	DioHealth[18] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-18.PNG");
	CC212VSGL::resizeImage(DioHealth[18], 650, 200);
	DioHealth[19] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-19.PNG");
	CC212VSGL::resizeImage(DioHealth[19], 650, 200);
	DioHealth[20] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-20.PNG");
	CC212VSGL::resizeImage(DioHealth[20], 650, 200);
	DioHealth[21] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-21.PNG");
	CC212VSGL::resizeImage(DioHealth[21], 650, 200);
	DioHealth[22] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-22.PNG");
	CC212VSGL::resizeImage(DioHealth[22], 650, 200);
	DioHealth[23] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-23.PNG");
	CC212VSGL::resizeImage(DioHealth[23], 650, 200);
	DioHealth[24] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-24.PNG");
	CC212VSGL::resizeImage(DioHealth[24], 650, 200);
	DioHealth[25] = CC212VSGL::loadImage("Dio\\Health\\Dio-Health-25.PNG");
	CC212VSGL::resizeImage(DioHealth[25], 650, 200);
}
void LoadingScreen(int l) {
	CC212VSGL::beginDraw();
	CC212VSGL::drawImage(LS[l], 0, 0, 0);
	CC212VSGL::endDraw();
}                                     
void ReadJotaroWB() {
	JotaroWB[0] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-0.PNG");
	CC212VSGL::resizeImage(JotaroWB[0], 400, 530);
	JotaroWB[1] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-1.PNG");
	CC212VSGL::resizeImage(JotaroWB[1], 400, 530);
	JotaroWB[2] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-2.PNG");
	CC212VSGL::resizeImage(JotaroWB[2], 400, 530);
	JotaroWB[3] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-3.PNG");
	CC212VSGL::resizeImage(JotaroWB[3], 400, 530);
	JotaroWB[4] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-4.PNG");
	CC212VSGL::resizeImage(JotaroWB[4], 400, 530);
	JotaroWB[5] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-5.PNG");
	CC212VSGL::resizeImage(JotaroWB[5], 400, 530);
	JotaroWB[6] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-6.PNG");
	CC212VSGL::resizeImage(JotaroWB[6], 400, 530);
	JotaroWB[7] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-7.PNG");
	CC212VSGL::resizeImage(JotaroWB[7], 400, 530);
	JotaroWB[8] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-8.PNG");
	CC212VSGL::resizeImage(JotaroWB[8], 400, 530);
	JotaroWB[9] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-9.PNG");
	CC212VSGL::resizeImage(JotaroWB[9], 400, 530);
	JotaroWB[10] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-10.PNG");
	CC212VSGL::resizeImage(JotaroWB[10], 400, 530);
	JotaroWB[11] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-11.PNG");
	CC212VSGL::resizeImage(JotaroWB[11], 400, 530);
	JotaroWB[12] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-12.PNG");
	CC212VSGL::resizeImage(JotaroWB[12], 400, 530);
	JotaroWB[13] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-13.PNG");
	CC212VSGL::resizeImage(JotaroWB[13], 400, 530);
	JotaroWB[14] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-14.PNG");
	CC212VSGL::resizeImage(JotaroWB[14], 400, 530);
	JotaroWB[15] = CC212VSGL::loadImage("Jotaro\\Walking Backwards\\Jotaro-WB-15.PNG");
	CC212VSGL::resizeImage(JotaroWB[15], 400, 530);
}
void ReadJotaroWBR() {
	JotaroWBR[0] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-0.PNG");
	CC212VSGL::resizeImage(JotaroWBR[0], 400, 530);
	JotaroWBR[1] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-1.PNG");
	CC212VSGL::resizeImage(JotaroWBR[1], 400, 530);
	JotaroWBR[2] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-2.PNG");
	CC212VSGL::resizeImage(JotaroWBR[2], 400, 530);
	JotaroWBR[3] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-3.PNG");
	CC212VSGL::resizeImage(JotaroWBR[3], 400, 530);
	JotaroWBR[4] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-4.PNG");
	CC212VSGL::resizeImage(JotaroWBR[4], 400, 530);
	JotaroWBR[5] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-5.PNG");
	CC212VSGL::resizeImage(JotaroWBR[5], 400, 530);
	JotaroWBR[6] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-6.PNG");
	CC212VSGL::resizeImage(JotaroWBR[6], 400, 530);
	JotaroWBR[7] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-7.PNG");
	CC212VSGL::resizeImage(JotaroWBR[7], 400, 530);
	JotaroWBR[8] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-8.PNG");
	CC212VSGL::resizeImage(JotaroWBR[8], 400, 530);
	JotaroWBR[9] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-9.PNG");
	CC212VSGL::resizeImage(JotaroWBR[9], 400, 530);
	JotaroWBR[10] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-10.PNG");
	CC212VSGL::resizeImage(JotaroWBR[10], 400, 530);
	JotaroWBR[11] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-11.PNG");
	CC212VSGL::resizeImage(JotaroWBR[11], 400, 530);
	JotaroWBR[12] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-12.PNG");
	CC212VSGL::resizeImage(JotaroWBR[12], 400, 530);
	JotaroWBR[13] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-13.PNG");
	CC212VSGL::resizeImage(JotaroWBR[13], 400, 530);
	JotaroWBR[14] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-14.PNG");
	CC212VSGL::resizeImage(JotaroWBR[14], 400, 530);
	JotaroWBR[15] = CC212VSGL::loadImage("JotaroR\\Walking Backwards\\Jotaro-WB-15.PNG");
	CC212VSGL::resizeImage(JotaroWBR[15], 400, 530);
}
void ReadJotaroHealth() {
	JotaroHealth[0] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-0.PNG");
	CC212VSGL::resizeImage(JotaroHealth[0], 650, 200);
	JotaroHealth[1] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-1.PNG");
	CC212VSGL::resizeImage(JotaroHealth[1], 650, 200);
	JotaroHealth[2] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-2.PNG");
	CC212VSGL::resizeImage(JotaroHealth[2], 650, 200);
	JotaroHealth[3] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-3.PNG");
	CC212VSGL::resizeImage(JotaroHealth[3], 650, 200);
	JotaroHealth[4] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-4.PNG");
	CC212VSGL::resizeImage(JotaroHealth[4], 650, 200);
	JotaroHealth[5] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-5.PNG");
	CC212VSGL::resizeImage(JotaroHealth[5], 650, 200);
	JotaroHealth[6] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-6.PNG");
	CC212VSGL::resizeImage(JotaroHealth[6], 650, 200);
	JotaroHealth[7] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-7.PNG");
	CC212VSGL::resizeImage(JotaroHealth[7], 650, 200);
	JotaroHealth[8] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-8.PNG");
	CC212VSGL::resizeImage(JotaroHealth[8], 650, 200);
	JotaroHealth[9] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-9.PNG");
	CC212VSGL::resizeImage(JotaroHealth[9], 650, 200);
	JotaroHealth[10] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-10.PNG");
	CC212VSGL::resizeImage(JotaroHealth[10], 650, 200);
	JotaroHealth[11] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-11.PNG");
	CC212VSGL::resizeImage(JotaroHealth[11], 650, 200);
	JotaroHealth[12] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-12.PNG");
	CC212VSGL::resizeImage(JotaroHealth[12], 650, 200);
	JotaroHealth[13] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-13.PNG");
	CC212VSGL::resizeImage(JotaroHealth[13], 650, 200);
	JotaroHealth[14] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-14.PNG");
	CC212VSGL::resizeImage(JotaroHealth[14], 650, 200);
	JotaroHealth[15] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-15.PNG");
	CC212VSGL::resizeImage(JotaroHealth[15], 650, 200);
	JotaroHealth[16] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-16.PNG");
	CC212VSGL::resizeImage(JotaroHealth[16], 650, 200);
	JotaroHealth[17] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-17.PNG");
	CC212VSGL::resizeImage(JotaroHealth[17], 650, 200);
	JotaroHealth[18] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-18.PNG");
	CC212VSGL::resizeImage(JotaroHealth[18], 650, 200);
	JotaroHealth[19] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-19.PNG");
	CC212VSGL::resizeImage(JotaroHealth[19], 650, 200);
	JotaroHealth[20] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-20.PNG");
	CC212VSGL::resizeImage(JotaroHealth[20], 650, 200);
	JotaroHealth[21] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-21.PNG");
	CC212VSGL::resizeImage(JotaroHealth[21], 650, 200);
	JotaroHealth[22] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-22.PNG");
	CC212VSGL::resizeImage(JotaroHealth[22], 650, 200);
	JotaroHealth[23] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-23.PNG");
	CC212VSGL::resizeImage(JotaroHealth[23], 650, 200);
	JotaroHealth[24] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-24.PNG");
	CC212VSGL::resizeImage(JotaroHealth[24], 650, 200);
	JotaroHealth[25] = CC212VSGL::loadImage("Jotaro\\Health\\Jotaro-Health-25.PNG");
	CC212VSGL::resizeImage(JotaroHealth[25], 650, 200);
}
void ReadJotaroJ() {
	JotaroJ[0] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-0.PNG");
	CC212VSGL::resizeImage(JotaroJ[0], 400, 530);
	JotaroJ[1] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-1.PNG");
	CC212VSGL::resizeImage(JotaroJ[1], 400, 530);
	JotaroJ[2] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-2.PNG");
	CC212VSGL::resizeImage(JotaroJ[2], 400, 530);
	JotaroJ[3] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-3.PNG");
	CC212VSGL::resizeImage(JotaroJ[3], 400, 530);
	JotaroJ[4] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-4.PNG");
	CC212VSGL::resizeImage(JotaroJ[4], 400, 530);
	JotaroJ[5] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-5.PNG");
	CC212VSGL::resizeImage(JotaroJ[5], 400, 530);
	JotaroJ[6] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-6.PNG");
	CC212VSGL::resizeImage(JotaroJ[6], 400, 530);
	JotaroJ[7] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-7.PNG");
	CC212VSGL::resizeImage(JotaroJ[7], 400, 530);
	JotaroJ[8] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-8.PNG");
	CC212VSGL::resizeImage(JotaroJ[8], 400, 530);
	JotaroJ[9] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-9.PNG");
	CC212VSGL::resizeImage(JotaroJ[9], 400, 530);
	JotaroJ[10] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-10.PNG");
	CC212VSGL::resizeImage(JotaroJ[10], 400, 530);
	JotaroJ[11] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-11.PNG");
	CC212VSGL::resizeImage(JotaroJ[11], 400, 530);
	JotaroJ[12] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-12.PNG");
	CC212VSGL::resizeImage(JotaroJ[12], 400, 530);
	JotaroJ[13] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-13.PNG");
	CC212VSGL::resizeImage(JotaroJ[13], 400, 530);
	JotaroJ[14] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-14.PNG");
	CC212VSGL::resizeImage(JotaroJ[14], 400, 530);
	JotaroJ[15] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-15.PNG");
	CC212VSGL::resizeImage(JotaroJ[15], 400, 530);
	JotaroJ[16] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-16.PNG");
	CC212VSGL::resizeImage(JotaroJ[16], 400, 530);
	JotaroJ[17] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-17.PNG");
	CC212VSGL::resizeImage(JotaroJ[17], 400, 530);
	JotaroJ[18] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-18.PNG");
	CC212VSGL::resizeImage(JotaroJ[18], 400, 530);
	JotaroJ[19] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-19.PNG");
	CC212VSGL::resizeImage(JotaroJ[19], 400, 530);
	JotaroJ[20] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-20.PNG");
	CC212VSGL::resizeImage(JotaroJ[20], 400, 530);
	JotaroJ[21] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-21.PNG");
	CC212VSGL::resizeImage(JotaroJ[21], 400, 530);
	JotaroJ[22] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-22.PNG");
	CC212VSGL::resizeImage(JotaroJ[22], 400, 530);
	JotaroJ[23] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-23.PNG");
	CC212VSGL::resizeImage(JotaroJ[23], 400, 530);
	JotaroJ[24] = CC212VSGL::loadImage("Jotaro\\Jump\\Jotaro-Jump-24.PNG");
	CC212VSGL::resizeImage(JotaroJ[24], 400, 530);
}
void ReadJotaroJR() {
	JotaroJR[0] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-0.PNG");
	CC212VSGL::resizeImage(JotaroJR[0], 400, 530);
	JotaroJR[1] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-1.PNG");
	CC212VSGL::resizeImage(JotaroJR[1], 400, 530);
	JotaroJR[2] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-2.PNG");
	CC212VSGL::resizeImage(JotaroJR[2], 400, 530);
	JotaroJR[3] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-3.PNG");
	CC212VSGL::resizeImage(JotaroJR[3], 400, 530);
	JotaroJR[4] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-4.PNG");
	CC212VSGL::resizeImage(JotaroJR[4], 400, 530);
	JotaroJR[5] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-5.PNG");
	CC212VSGL::resizeImage(JotaroJR[5], 400, 530);
	JotaroJR[6] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-6.PNG");
	CC212VSGL::resizeImage(JotaroJR[6], 400, 530);
	JotaroJR[7] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-7.PNG");
	CC212VSGL::resizeImage(JotaroJR[7], 400, 530);
	JotaroJR[8] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-8.PNG");
	CC212VSGL::resizeImage(JotaroJR[8], 400, 530);
	JotaroJR[9] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-9.PNG");
	CC212VSGL::resizeImage(JotaroJR[9], 400, 530);
	JotaroJR[10] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-10.PNG");
	CC212VSGL::resizeImage(JotaroJR[10], 400, 530);
	JotaroJR[11] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-11.PNG");
	CC212VSGL::resizeImage(JotaroJR[11], 400, 530);
	JotaroJR[12] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-12.PNG");
	CC212VSGL::resizeImage(JotaroJR[12], 400, 530);
	JotaroJR[13] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-13.PNG");
	CC212VSGL::resizeImage(JotaroJR[13], 400, 530);
	JotaroJR[14] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-14.PNG");
	CC212VSGL::resizeImage(JotaroJR[14], 400, 530);
	JotaroJR[15] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-15.PNG");
	CC212VSGL::resizeImage(JotaroJR[15], 400, 530);
	JotaroJR[16] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-16.PNG");
	CC212VSGL::resizeImage(JotaroJR[16], 400, 530);
	JotaroJR[17] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-17.PNG");
	CC212VSGL::resizeImage(JotaroJR[17], 400, 530);
	JotaroJR[18] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-18.PNG");
	CC212VSGL::resizeImage(JotaroJR[18], 400, 530);
	JotaroJR[19] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-19.PNG");
	CC212VSGL::resizeImage(JotaroJR[19], 400, 530);
	JotaroJR[20] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-20.PNG");
	CC212VSGL::resizeImage(JotaroJR[20], 400, 530);
	JotaroJR[21] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-21.PNG");
	CC212VSGL::resizeImage(JotaroJR[21], 400, 530);
	JotaroJR[22] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-22.PNG");
	CC212VSGL::resizeImage(JotaroJR[22], 400, 530);
	JotaroJR[23] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-23.PNG");
	CC212VSGL::resizeImage(JotaroJR[23], 400, 530);
	JotaroJR[24] = CC212VSGL::loadImage("JotaroR\\Jump\\Jotaro-Jump-24.PNG");
	CC212VSGL::resizeImage(JotaroJR[24], 400, 530);
}
void ReadJotaroWF() {
	JotaroWF[0] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-0.PNG");
	CC212VSGL::resizeImage(JotaroWF[0], 400, 530);
	JotaroWF[1] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-1.PNG");
	CC212VSGL::resizeImage(JotaroWF[1], 400, 530);
	JotaroWF[2] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-2.PNG");
	CC212VSGL::resizeImage(JotaroWF[2], 400, 530);
	JotaroWF[3] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-3.PNG");
	CC212VSGL::resizeImage(JotaroWF[3], 400, 530);
	JotaroWF[4] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-4.PNG");
	CC212VSGL::resizeImage(JotaroWF[4], 400, 530);
	JotaroWF[5] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-5.PNG");
	CC212VSGL::resizeImage(JotaroWF[5], 400, 530);
	JotaroWF[6] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-6.PNG");
	CC212VSGL::resizeImage(JotaroWF[6], 400, 530);
	JotaroWF[7] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-7.PNG");
	CC212VSGL::resizeImage(JotaroWF[7], 400, 530);
	JotaroWF[8] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-8.PNG");
	CC212VSGL::resizeImage(JotaroWF[8], 400, 530);
	JotaroWF[9] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-9.PNG");
	CC212VSGL::resizeImage(JotaroWF[9], 400, 530);
	JotaroWF[10] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-10.PNG");
	CC212VSGL::resizeImage(JotaroWF[10], 400, 530);
	JotaroWF[11] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-11.PNG");
	CC212VSGL::resizeImage(JotaroWF[11], 400, 530);
	JotaroWF[12] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-12.PNG");
	CC212VSGL::resizeImage(JotaroWF[12], 400, 530);
	JotaroWF[13] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-13.PNG");
	CC212VSGL::resizeImage(JotaroWF[13], 400, 530);
	JotaroWF[14] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-14.PNG");
	CC212VSGL::resizeImage(JotaroWF[14], 400, 530);
	JotaroWF[15] = CC212VSGL::loadImage("Jotaro\\Walking Forward\\Jotaro-WF-15.PNG");
	CC212VSGL::resizeImage(JotaroWF[15], 400, 530);
}
void ReadJotaroWFR() {
	JotaroWFR[0] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-0.PNG");
	CC212VSGL::resizeImage(JotaroWFR[0], 400, 530);
	JotaroWFR[1] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-1.PNG");
	CC212VSGL::resizeImage(JotaroWFR[1], 400, 530);
	JotaroWFR[2] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-2.PNG");
	CC212VSGL::resizeImage(JotaroWFR[2], 400, 530);
	JotaroWFR[3] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-3.PNG");
	CC212VSGL::resizeImage(JotaroWFR[3], 400, 530);
	JotaroWFR[4] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-4.PNG");
	CC212VSGL::resizeImage(JotaroWFR[4], 400, 530);
	JotaroWFR[5] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-5.PNG");
	CC212VSGL::resizeImage(JotaroWFR[5], 400, 530);
	JotaroWFR[6] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-6.PNG");
	CC212VSGL::resizeImage(JotaroWFR[6], 400, 530);
	JotaroWFR[7] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-7.PNG");
	CC212VSGL::resizeImage(JotaroWFR[7], 400, 530);
	JotaroWFR[8] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-8.PNG");
	CC212VSGL::resizeImage(JotaroWFR[8], 400, 530);
	JotaroWFR[9] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-9.PNG");
	CC212VSGL::resizeImage(JotaroWFR[9], 400, 530);
	JotaroWFR[10] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-10.PNG");
	CC212VSGL::resizeImage(JotaroWFR[10], 400, 530);
	JotaroWFR[11] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-11.PNG");
	CC212VSGL::resizeImage(JotaroWFR[11], 400, 530);
	JotaroWFR[12] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-12.PNG");
	CC212VSGL::resizeImage(JotaroWFR[12], 400, 530);
	JotaroWFR[13] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-13.PNG");
	CC212VSGL::resizeImage(JotaroWFR[13], 400, 530);
	JotaroWFR[14] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-14.PNG");
	CC212VSGL::resizeImage(JotaroWFR[14], 400, 530);
	JotaroWFR[15] = CC212VSGL::loadImage("JotaroR\\Walking Forward\\Jotaro-WF-15.PNG");
	CC212VSGL::resizeImage(JotaroWFR[15], 400, 530);
}
void ReadJotaroS() {
	JotaroS[0] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-0.PNG");
	CC212VSGL::resizeImage(JotaroS[0], 400, 530);
	JotaroS[1] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-1.PNG");
	CC212VSGL::resizeImage(JotaroS[1], 400, 530);
	JotaroS[2] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-2.PNG");
	CC212VSGL::resizeImage(JotaroS[2], 400, 530);
	JotaroS[3] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-3.PNG");
	CC212VSGL::resizeImage(JotaroS[3], 400, 530);
	JotaroS[4] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-4.PNG");
	CC212VSGL::resizeImage(JotaroS[4], 400, 530);
	JotaroS[5] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-5.PNG");
	CC212VSGL::resizeImage(JotaroS[5], 400, 530);
	JotaroS[6] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-6.PNG");
	CC212VSGL::resizeImage(JotaroS[6], 400, 530);
	JotaroS[7] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-7.PNG");
	CC212VSGL::resizeImage(JotaroS[7], 400, 530);
	JotaroS[8] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-8.PNG");
	CC212VSGL::resizeImage(JotaroS[8], 400, 530);
	JotaroS[9] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-9.PNG");
	CC212VSGL::resizeImage(JotaroS[9], 400, 530);
	JotaroS[10] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-10.PNG");
	CC212VSGL::resizeImage(JotaroS[10], 400, 530);
	JotaroS[11] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-11.PNG");
	CC212VSGL::resizeImage(JotaroS[11], 400, 530);
	JotaroS[12] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-12.PNG");
	CC212VSGL::resizeImage(JotaroS[12], 400, 530);
	JotaroS[13] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-13.PNG");
	CC212VSGL::resizeImage(JotaroS[13], 400, 530);
	JotaroS[14] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-14.PNG");
	CC212VSGL::resizeImage(JotaroS[14], 400, 530);
	JotaroS[15] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-15.PNG");
	CC212VSGL::resizeImage(JotaroS[15], 400, 530);
	JotaroS[16] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-16.PNG");
	CC212VSGL::resizeImage(JotaroS[16], 400, 530);
	JotaroS[17] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-17.PNG");
	CC212VSGL::resizeImage(JotaroS[17], 400, 530);
	JotaroS[18] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-18.PNG");
	CC212VSGL::resizeImage(JotaroS[18], 400, 530);
	JotaroS[19] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-19.PNG");
	CC212VSGL::resizeImage(JotaroS[19], 400, 530);
	JotaroS[20] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-20.PNG");
	CC212VSGL::resizeImage(JotaroS[20], 400, 530);
	JotaroS[21] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-21.PNG");
	CC212VSGL::resizeImage(JotaroS[21], 400, 530);
	JotaroS[22] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-22.PNG");
	CC212VSGL::resizeImage(JotaroS[22], 400, 530);
	JotaroS[23] = CC212VSGL::loadImage("Jotaro\\Stance\\Jotaro-Stance-23.PNG");
	CC212VSGL::resizeImage(JotaroS[23], 400, 530);
}
void ReadJotaroSR() {
	JotaroSR[0] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-0.PNG");
	CC212VSGL::resizeImage(JotaroSR[0], 400, 530);
	JotaroSR[1] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-1.PNG");
	CC212VSGL::resizeImage(JotaroSR[1], 400, 530);
	JotaroSR[2] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-2.PNG");
	CC212VSGL::resizeImage(JotaroSR[2], 400, 530);
	JotaroSR[3] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-3.PNG");
	CC212VSGL::resizeImage(JotaroSR[3], 400, 530);
	JotaroSR[4] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-4.PNG");
	CC212VSGL::resizeImage(JotaroSR[4], 400, 530);
	JotaroSR[5] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-5.PNG");
	CC212VSGL::resizeImage(JotaroSR[5], 400, 530);
	JotaroSR[6] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-6.PNG");
	CC212VSGL::resizeImage(JotaroSR[6], 400, 530);
	JotaroSR[7] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-7.PNG");
	CC212VSGL::resizeImage(JotaroSR[7], 400, 530);
	JotaroSR[8] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-8.PNG");
	CC212VSGL::resizeImage(JotaroSR[8], 400, 530);
	JotaroSR[9] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-9.PNG");
	CC212VSGL::resizeImage(JotaroSR[9], 400, 530);
	JotaroSR[10] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-10.PNG");
	CC212VSGL::resizeImage(JotaroSR[10], 400, 530);
	JotaroSR[11] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-11.PNG");
	CC212VSGL::resizeImage(JotaroSR[11], 400, 530);
	JotaroSR[12] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-12.PNG");
	CC212VSGL::resizeImage(JotaroSR[12], 400, 530);
	JotaroSR[13] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-13.PNG");
	CC212VSGL::resizeImage(JotaroSR[13], 400, 530);
	JotaroSR[14] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-14.PNG");
	CC212VSGL::resizeImage(JotaroSR[14], 400, 530);
	JotaroSR[15] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-15.PNG");
	CC212VSGL::resizeImage(JotaroSR[15], 400, 530);
	JotaroSR[16] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-16.PNG");
	CC212VSGL::resizeImage(JotaroSR[16], 400, 530);
	JotaroSR[17] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-17.PNG");
	CC212VSGL::resizeImage(JotaroSR[17], 400, 530);
	JotaroSR[18] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-18.PNG");
	CC212VSGL::resizeImage(JotaroSR[18], 400, 530);
	JotaroSR[19] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-19.PNG");
	CC212VSGL::resizeImage(JotaroSR[19], 400, 530);
	JotaroSR[20] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-20.PNG");
	CC212VSGL::resizeImage(JotaroSR[20], 400, 530);
	JotaroSR[21] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-21.PNG");
	CC212VSGL::resizeImage(JotaroSR[21], 400, 530);
	JotaroSR[22] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-22.PNG");
	CC212VSGL::resizeImage(JotaroSR[22], 400, 530);
	JotaroSR[23] = CC212VSGL::loadImage("JotaroR\\Stance\\Jotaro-Stance-23.PNG");
	CC212VSGL::resizeImage(JotaroSR[23], 400, 530);
}
void ReadJotaroH() {
	JotaroH[0] = CC212VSGL::loadImage("Jotaro\\Hit\\Jotaro-Hit-0.PNG");
	CC212VSGL::resizeImage(JotaroH[0], 400, 530);
	JotaroH[1] = CC212VSGL::loadImage("Jotaro\\Hit\\Jotaro-Hit-1.PNG");
	CC212VSGL::resizeImage(JotaroH[1], 400, 530);
	JotaroH[2] = CC212VSGL::loadImage("Jotaro\\Hit\\Jotaro-Hit-2.PNG");
	CC212VSGL::resizeImage(JotaroH[2], 400, 530);
	JotaroH[3] = CC212VSGL::loadImage("Jotaro\\Hit\\Jotaro-Hit-3.PNG");
	CC212VSGL::resizeImage(JotaroH[3], 400, 530);
}
void ReadJotaroHR() {
	JotaroHR[0] = CC212VSGL::loadImage("JotaroR\\Hit\\Jotaro-Hit-0.PNG");
	CC212VSGL::resizeImage(JotaroHR[0], 400, 530);
	JotaroHR[1] = CC212VSGL::loadImage("JotaroR\\Hit\\Jotaro-Hit-1.PNG");
	CC212VSGL::resizeImage(JotaroHR[1], 400, 530);
	JotaroHR[2] = CC212VSGL::loadImage("JotaroR\\Hit\\Jotaro-Hit-2.PNG");
	CC212VSGL::resizeImage(JotaroHR[2], 400, 530);
	JotaroHR[3] = CC212VSGL::loadImage("JotaroR\\Hit\\Jotaro-Hit-3.PNG");
	CC212VSGL::resizeImage(JotaroHR[3], 400, 530);
}
void ReadJotaroAL() {
	JotaroAL[0] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-0.PNG");
	CC212VSGL::resizeImage(JotaroAL[0], 400, 530);
	JotaroAL[1] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-1.PNG");
	CC212VSGL::resizeImage(JotaroAL[1], 400, 530);
	JotaroAL[2] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-2.PNG");
	CC212VSGL::resizeImage(JotaroAL[2], 400, 530);
	JotaroAL[3] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-3.PNG");
	CC212VSGL::resizeImage(JotaroAL[3], 400, 530);
	JotaroAL[4] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-4.PNG");
	CC212VSGL::resizeImage(JotaroAL[4], 400, 530);
	JotaroAL[5] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-5.PNG");
	CC212VSGL::resizeImage(JotaroAL[5], 400, 530);
	JotaroAL[6] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-6.PNG");
	CC212VSGL::resizeImage(JotaroAL[6], 400, 530);
	JotaroAL[7] = CC212VSGL::loadImage("Jotaro\\Attack Light\\Jotaro-AttackL-7.PNG");
	CC212VSGL::resizeImage(JotaroAL[7], 400, 530);
}
void ReadJotaroALR() {
	JotaroALR[0] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-0.PNG");
	CC212VSGL::resizeImage(JotaroALR[0], 400, 530);
	JotaroALR[1] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-1.PNG");
	CC212VSGL::resizeImage(JotaroALR[1], 400, 530);
	JotaroALR[2] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-2.PNG");
	CC212VSGL::resizeImage(JotaroALR[2], 400, 530);
	JotaroALR[3] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-3.PNG");
	CC212VSGL::resizeImage(JotaroALR[3], 400, 530);
	JotaroALR[4] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-4.PNG");
	CC212VSGL::resizeImage(JotaroALR[4], 400, 530);
	JotaroALR[5] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-5.PNG");
	CC212VSGL::resizeImage(JotaroALR[5], 400, 530);
	JotaroALR[6] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-6.PNG");
	CC212VSGL::resizeImage(JotaroALR[6], 400, 530);
	JotaroALR[7] = CC212VSGL::loadImage("JotaroR\\Attack Light\\Jotaro-AttackL-7.PNG");
	CC212VSGL::resizeImage(JotaroALR[7], 400, 530);
}
void ReadJotaroAH() {
	JotaroAH[0] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-0.PNG");
	CC212VSGL::resizeImage(JotaroAH[0], 400, 530);
	JotaroAH[1] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-1.PNG");
	CC212VSGL::resizeImage(JotaroAH[1], 400, 530);
	JotaroAH[2] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-2.PNG");
	CC212VSGL::resizeImage(JotaroAH[2], 400, 530);
	JotaroAH[3] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-3.PNG");
	CC212VSGL::resizeImage(JotaroAH[3], 415, 530);
	JotaroAH[4] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-4.PNG");
	CC212VSGL::resizeImage(JotaroAH[4], 400, 530);
	JotaroAH[5] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-5.PNG");
	CC212VSGL::resizeImage(JotaroAH[5], 400, 530);
	JotaroAH[6] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-6.PNG");
	CC212VSGL::resizeImage(JotaroAH[6], 400, 530);
	JotaroAH[7] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-7.PNG");
	CC212VSGL::resizeImage(JotaroAH[7], 400, 530);
	JotaroAH[8] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-8.PNG");
	CC212VSGL::resizeImage(JotaroAH[8], 400, 530);
	JotaroAH[9] = CC212VSGL::loadImage("Jotaro\\Attack Heavy\\Jotaro-AttackH-9.PNG");
	CC212VSGL::resizeImage(JotaroAH[9], 400, 530);
}
void ReadJotaroAHR() {
	JotaroAHR[0] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-0.PNG");
	CC212VSGL::resizeImage(JotaroAHR[0], 400, 530);
	JotaroAHR[1] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-1.PNG");
	CC212VSGL::resizeImage(JotaroAHR[1], 400, 530);
	JotaroAHR[2] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-2.PNG");
	CC212VSGL::resizeImage(JotaroAHR[2], 400, 530);
	JotaroAHR[3] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-3.PNG");
	CC212VSGL::resizeImage(JotaroAHR[3], 400, 545);
	JotaroAHR[4] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-4.PNG");
	CC212VSGL::resizeImage(JotaroAHR[4], 400, 530);
	JotaroAHR[5] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-5.PNG");
	CC212VSGL::resizeImage(JotaroAHR[5], 400, 530);
	JotaroAHR[6] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-6.PNG");
	CC212VSGL::resizeImage(JotaroAHR[6], 400, 530);
	JotaroAHR[7] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-7.PNG");
	CC212VSGL::resizeImage(JotaroAHR[7], 400, 530);
	JotaroAHR[8] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-8.PNG");
	CC212VSGL::resizeImage(JotaroAHR[8], 400, 530);
	JotaroAHR[9] = CC212VSGL::loadImage("JotaroR\\Attack Heavy\\Jotaro-AttackH-9.PNG");
	CC212VSGL::resizeImage(JotaroAHR[9], 400, 530);
}
void ReadBackground() {
	Background[0] = CC212VSGL::loadImage("Background\\frame_000_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[0], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[1] = CC212VSGL::loadImage("Background\\frame_001_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[1], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[2] = CC212VSGL::loadImage("Background\\frame_002_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[2], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[3] = CC212VSGL::loadImage("Background\\frame_003_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[3], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[4] = CC212VSGL::loadImage("Background\\frame_004_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[4], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[5] = CC212VSGL::loadImage("Background\\frame_005_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[5], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[6] = CC212VSGL::loadImage("Background\\frame_006_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[6], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[7] = CC212VSGL::loadImage("Background\\frame_007_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[7], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[8] = CC212VSGL::loadImage("Background\\frame_008_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[8], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[9] = CC212VSGL::loadImage("Background\\frame_009_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[9], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[10] = CC212VSGL::loadImage("Background\\frame_010_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[10], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[11] = CC212VSGL::loadImage("Background\\frame_011_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[11], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[12] = CC212VSGL::loadImage("Background\\frame_012_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[12], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[13] = CC212VSGL::loadImage("Background\\frame_013_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[13], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[14] = CC212VSGL::loadImage("Background\\frame_014_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[14], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[15] = CC212VSGL::loadImage("Background\\frame_015_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[15], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[16] = CC212VSGL::loadImage("Background\\frame_016_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[16], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[17] = CC212VSGL::loadImage("Background\\frame_017_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[17], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[18] = CC212VSGL::loadImage("Background\\frame_018_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[18], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[19] = CC212VSGL::loadImage("Background\\frame_019_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[19], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[20] = CC212VSGL::loadImage("Background\\frame_020_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[20], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[21] = CC212VSGL::loadImage("Background\\frame_021_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[21], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[22] = CC212VSGL::loadImage("Background\\frame_022_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[22], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[23] = CC212VSGL::loadImage("Background\\frame_023_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[23], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[24] = CC212VSGL::loadImage("Background\\frame_024_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[24], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[25] = CC212VSGL::loadImage("Background\\frame_025_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[25], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[26] = CC212VSGL::loadImage("Background\\frame_026_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[26], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[27] = CC212VSGL::loadImage("Background\\frame_027_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[27], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[28] = CC212VSGL::loadImage("Background\\frame_028_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[28], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[29] = CC212VSGL::loadImage("Background\\frame_029_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[29], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[30] = CC212VSGL::loadImage("Background\\frame_030_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[30], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[31] = CC212VSGL::loadImage("Background\\frame_031_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[31], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[32] = CC212VSGL::loadImage("Background\\frame_032_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[32], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[33] = CC212VSGL::loadImage("Background\\frame_033_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[33], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[34] = CC212VSGL::loadImage("Background\\frame_034_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[34], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[35] = CC212VSGL::loadImage("Background\\frame_035_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[35], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[36] = CC212VSGL::loadImage("Background\\frame_036_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[36], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[37] = CC212VSGL::loadImage("Background\\frame_037_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[37], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[38] = CC212VSGL::loadImage("Background\\frame_038_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[38], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[39] = CC212VSGL::loadImage("Background\\frame_039_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[39], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[40] = CC212VSGL::loadImage("Background\\frame_040_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[40], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[41] = CC212VSGL::loadImage("Background\\frame_041_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[41], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[42] = CC212VSGL::loadImage("Background\\frame_042_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[42], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[43] = CC212VSGL::loadImage("Background\\frame_043_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[43], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[44] = CC212VSGL::loadImage("Background\\frame_044_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[44], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[45] = CC212VSGL::loadImage("Background\\frame_045_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[45], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[46] = CC212VSGL::loadImage("Background\\frame_046_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[46], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[47] = CC212VSGL::loadImage("Background\\frame_047_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[47], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[48] = CC212VSGL::loadImage("Background\\frame_048_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[48], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[49] = CC212VSGL::loadImage("Background\\frame_049_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[49], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[50] = CC212VSGL::loadImage("Background\\frame_050_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[50], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[51] = CC212VSGL::loadImage("Background\\frame_051_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[51], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[52] = CC212VSGL::loadImage("Background\\frame_052_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[52], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[53] = CC212VSGL::loadImage("Background\\frame_053_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[53], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[54] = CC212VSGL::loadImage("Background\\frame_054_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[54], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[55] = CC212VSGL::loadImage("Background\\frame_055_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[55], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[56] = CC212VSGL::loadImage("Background\\frame_056_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[56], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[57] = CC212VSGL::loadImage("Background\\frame_057_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[57], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[58] = CC212VSGL::loadImage("Background\\frame_058_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[58], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[59] = CC212VSGL::loadImage("Background\\frame_059_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[59], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[60] = CC212VSGL::loadImage("Background\\frame_060_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[60], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[61] = CC212VSGL::loadImage("Background\\frame_061_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[61], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[62] = CC212VSGL::loadImage("Background\\frame_062_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[62], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[63] = CC212VSGL::loadImage("Background\\frame_063_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[63], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[64] = CC212VSGL::loadImage("Background\\frame_064_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[64], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[65] = CC212VSGL::loadImage("Background\\frame_065_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[65], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[66] = CC212VSGL::loadImage("Background\\frame_066_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[66], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[67] = CC212VSGL::loadImage("Background\\frame_067_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[67], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[68] = CC212VSGL::loadImage("Background\\frame_068_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[68], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[69] = CC212VSGL::loadImage("Background\\frame_069_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[69], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[70] = CC212VSGL::loadImage("Background\\frame_070_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[70], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[71] = CC212VSGL::loadImage("Background\\frame_071_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[71], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[72] = CC212VSGL::loadImage("Background\\frame_072_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[72], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[73] = CC212VSGL::loadImage("Background\\frame_073_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[73], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[74] = CC212VSGL::loadImage("Background\\frame_074_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[74], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[75] = CC212VSGL::loadImage("Background\\frame_075_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[75], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[76] = CC212VSGL::loadImage("Background\\frame_076_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[76], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[77] = CC212VSGL::loadImage("Background\\frame_077_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[77], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[78] = CC212VSGL::loadImage("Background\\frame_078_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[78], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[79] = CC212VSGL::loadImage("Background\\frame_079_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[79], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[80] = CC212VSGL::loadImage("Background\\frame_080_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[80], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[81] = CC212VSGL::loadImage("Background\\frame_081_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[81], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[82] = CC212VSGL::loadImage("Background\\frame_082_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[82], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[83] = CC212VSGL::loadImage("Background\\frame_083_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[83], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[84] = CC212VSGL::loadImage("Background\\frame_084_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[84], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[85] = CC212VSGL::loadImage("Background\\frame_085_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[85], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[86] = CC212VSGL::loadImage("Background\\frame_086_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[86], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[87] = CC212VSGL::loadImage("Background\\frame_087_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[87], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[88] = CC212VSGL::loadImage("Background\\frame_088_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[88], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[89] = CC212VSGL::loadImage("Background\\frame_089_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[89], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[90] = CC212VSGL::loadImage("Background\\frame_090_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[90], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[91] = CC212VSGL::loadImage("Background\\frame_091_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[91], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[92] = CC212VSGL::loadImage("Background\\frame_092_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[92], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[93] = CC212VSGL::loadImage("Background\\frame_093_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[93], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[94] = CC212VSGL::loadImage("Background\\frame_094_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[94], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[95] = CC212VSGL::loadImage("Background\\frame_095_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[95], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[96] = CC212VSGL::loadImage("Background\\frame_096_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[96], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[97] = CC212VSGL::loadImage("Background\\frame_097_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[97], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[98] = CC212VSGL::loadImage("Background\\frame_098_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[98], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[99] = CC212VSGL::loadImage("Background\\frame_099_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[99], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[100] = CC212VSGL::loadImage("Background\\frame_100_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[100], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[101] = CC212VSGL::loadImage("Background\\frame_101_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[101], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[102] = CC212VSGL::loadImage("Background\\frame_102_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[102], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[103] = CC212VSGL::loadImage("Background\\frame_103_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[103], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[104] = CC212VSGL::loadImage("Background\\frame_104_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[104], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[105] = CC212VSGL::loadImage("Background\\frame_105_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[105], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[106] = CC212VSGL::loadImage("Background\\frame_106_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[106], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[107] = CC212VSGL::loadImage("Background\\frame_107_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[107], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[108] = CC212VSGL::loadImage("Background\\frame_108_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[108], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[109] = CC212VSGL::loadImage("Background\\frame_109_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[109], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[110] = CC212VSGL::loadImage("Background\\frame_110_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[110], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[111] = CC212VSGL::loadImage("Background\\frame_111_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[111], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[112] = CC212VSGL::loadImage("Background\\frame_112_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[112], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[113] = CC212VSGL::loadImage("Background\\frame_113_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[113], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[114] = CC212VSGL::loadImage("Background\\frame_114_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[114], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[115] = CC212VSGL::loadImage("Background\\frame_115_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[115], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[116] = CC212VSGL::loadImage("Background\\frame_116_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[116], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[117] = CC212VSGL::loadImage("Background\\frame_117_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[117], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[118] = CC212VSGL::loadImage("Background\\frame_118_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[118], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[119] = CC212VSGL::loadImage("Background\\frame_119_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[119], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[120] = CC212VSGL::loadImage("Background\\frame_120_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[120], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[121] = CC212VSGL::loadImage("Background\\frame_121_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[121], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[122] = CC212VSGL::loadImage("Background\\frame_122_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[122], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[123] = CC212VSGL::loadImage("Background\\frame_123_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[123], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[124] = CC212VSGL::loadImage("Background\\frame_124_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[124], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[125] = CC212VSGL::loadImage("Background\\frame_125_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[125], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[126] = CC212VSGL::loadImage("Background\\frame_126_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[126], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[127] = CC212VSGL::loadImage("Background\\frame_127_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[127], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[128] = CC212VSGL::loadImage("Background\\frame_128_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[128], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[129] = CC212VSGL::loadImage("Background\\frame_129_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[129], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[130] = CC212VSGL::loadImage("Background\\frame_130_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[130], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[131] = CC212VSGL::loadImage("Background\\frame_131_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[131], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[132] = CC212VSGL::loadImage("Background\\frame_132_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[132], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[133] = CC212VSGL::loadImage("Background\\frame_133_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[133], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[134] = CC212VSGL::loadImage("Background\\frame_134_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[134], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[135] = CC212VSGL::loadImage("Background\\frame_135_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[135], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[136] = CC212VSGL::loadImage("Background\\frame_136_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[136], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[137] = CC212VSGL::loadImage("Background\\frame_137_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[137], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[138] = CC212VSGL::loadImage("Background\\frame_138_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[138], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[139] = CC212VSGL::loadImage("Background\\frame_139_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[139], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[140] = CC212VSGL::loadImage("Background\\frame_140_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[140], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[141] = CC212VSGL::loadImage("Background\\frame_141_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[141], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[142] = CC212VSGL::loadImage("Background\\frame_142_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[142], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[143] = CC212VSGL::loadImage("Background\\frame_143_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[143], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[144] = CC212VSGL::loadImage("Background\\frame_144_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[144], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[145] = CC212VSGL::loadImage("Background\\frame_145_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[145], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[146] = CC212VSGL::loadImage("Background\\frame_146_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[146], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[147] = CC212VSGL::loadImage("Background\\frame_147_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[147], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[148] = CC212VSGL::loadImage("Background\\frame_148_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[148], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[149] = CC212VSGL::loadImage("Background\\frame_149_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[149], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[150] = CC212VSGL::loadImage("Background\\frame_150_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[150], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[151] = CC212VSGL::loadImage("Background\\frame_151_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[151], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[152] = CC212VSGL::loadImage("Background\\frame_152_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[152], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[153] = CC212VSGL::loadImage("Background\\frame_153_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[153], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[154] = CC212VSGL::loadImage("Background\\frame_154_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[154], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[155] = CC212VSGL::loadImage("Background\\frame_155_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[155], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[156] = CC212VSGL::loadImage("Background\\frame_156_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[156], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[157] = CC212VSGL::loadImage("Background\\frame_157_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[157], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[158] = CC212VSGL::loadImage("Background\\frame_158_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[158], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[159] = CC212VSGL::loadImage("Background\\frame_159_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[159], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[160] = CC212VSGL::loadImage("Background\\frame_160_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[160], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[161] = CC212VSGL::loadImage("Background\\frame_161_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[161], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[162] = CC212VSGL::loadImage("Background\\frame_162_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[162], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[163] = CC212VSGL::loadImage("Background\\frame_163_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[163], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[164] = CC212VSGL::loadImage("Background\\frame_164_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[164], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[165] = CC212VSGL::loadImage("Background\\frame_165_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[165], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[166] = CC212VSGL::loadImage("Background\\frame_166_delay-0.04s.PNG");
	CC212VSGL::resizeImage(Background[166], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[167] = CC212VSGL::loadImage("Background\\frame_167_delay-0.02s.PNG");
	CC212VSGL::resizeImage(Background[167], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[168] = CC212VSGL::loadImage("Background\\frame_168_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[168], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[169] = CC212VSGL::loadImage("Background\\frame_168_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[169], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[170] = CC212VSGL::loadImage("Background\\frame_169_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[170], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[171] = CC212VSGL::loadImage("Background\\frame_169_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[171], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[172] = CC212VSGL::loadImage("Background\\frame_170_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[172], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[173] = CC212VSGL::loadImage("Background\\frame_170_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[173], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[174] = CC212VSGL::loadImage("Background\\frame_171_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[174], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[175] = CC212VSGL::loadImage("Background\\frame_171_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[175], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[176] = CC212VSGL::loadImage("Background\\frame_172_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[176], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[177] = CC212VSGL::loadImage("Background\\frame_172_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[177], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[178] = CC212VSGL::loadImage("Background\\frame_173_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[178], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[179] = CC212VSGL::loadImage("Background\\frame_173_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[179], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[180] = CC212VSGL::loadImage("Background\\frame_174_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[180], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[181] = CC212VSGL::loadImage("Background\\frame_174_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[181], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[182] = CC212VSGL::loadImage("Background\\frame_175_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[182], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[183] = CC212VSGL::loadImage("Background\\frame_175_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[183], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[184] = CC212VSGL::loadImage("Background\\frame_176_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[184], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[185] = CC212VSGL::loadImage("Background\\frame_177_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[185], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[186] = CC212VSGL::loadImage("Background\\frame_178_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[186], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[187] = CC212VSGL::loadImage("Background\\frame_179_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[187], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[188] = CC212VSGL::loadImage("Background\\frame_180_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[188], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[189] = CC212VSGL::loadImage("Background\\frame_181_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[189], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[190] = CC212VSGL::loadImage("Background\\frame_182_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[190], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[191] = CC212VSGL::loadImage("Background\\frame_183_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[191], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[192] = CC212VSGL::loadImage("Background\\frame_184_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[192], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[193] = CC212VSGL::loadImage("Background\\frame_185_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[193], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[194] = CC212VSGL::loadImage("Background\\frame_186_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[194], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[195] = CC212VSGL::loadImage("Background\\frame_187_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[195], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[196] = CC212VSGL::loadImage("Background\\frame_188_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[196], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[197] = CC212VSGL::loadImage("Background\\frame_189_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[197], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[198] = CC212VSGL::loadImage("Background\\frame_190_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[198], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[199] = CC212VSGL::loadImage("Background\\frame_191_delay-0.05s.PNG");
	CC212VSGL::resizeImage(Background[199], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[200] = CC212VSGL::loadImage("Background\\frame_192_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[200], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[201] = CC212VSGL::loadImage("Background\\frame_192_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[201], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[202] = CC212VSGL::loadImage("Background\\frame_193_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[202], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[203] = CC212VSGL::loadImage("Background\\frame_193_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[203], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[204] = CC212VSGL::loadImage("Background\\frame_194_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[204], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[205] = CC212VSGL::loadImage("Background\\frame_194_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[205], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[206] = CC212VSGL::loadImage("Background\\frame_195_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[206], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[207] = CC212VSGL::loadImage("Background\\frame_195_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[207], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[208] = CC212VSGL::loadImage("Background\\frame_196_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[208], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[209] = CC212VSGL::loadImage("Background\\frame_196_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[209], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[210] = CC212VSGL::loadImage("Background\\frame_197_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[210], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[211] = CC212VSGL::loadImage("Background\\frame_197_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[211], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[212] = CC212VSGL::loadImage("Background\\frame_198_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[212], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[213] = CC212VSGL::loadImage("Background\\frame_198_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[213], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[214] = CC212VSGL::loadImage("Background\\frame_199_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[214], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[215] = CC212VSGL::loadImage("Background\\frame_199_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[215], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[216] = CC212VSGL::loadImage("Background\\frame_200_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[216], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[217] = CC212VSGL::loadImage("Background\\frame_200_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[217], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[218] = CC212VSGL::loadImage("Background\\frame_201_delay-0.1s - Copy.PNG");
	CC212VSGL::resizeImage(Background[218], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
	Background[219] = CC212VSGL::loadImage("Background\\frame_201_delay-0.1s.PNG");
	CC212VSGL::resizeImage(Background[219], CC212VSGL::getWindowWidth(), CC212VSGL::getWindowHeight());
}
void ReadAudio() {
	mciSendStringA("open Audio\\YouSayRun.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\StandProud.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Click.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\Doshta.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\Pain.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\HitJ.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\AttackL.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\AttackH.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\AttackH.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\YareYare.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\StarPlatinum.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\Blink.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\Death.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Jotaro\\ORAORA.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\AttackH.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\Pain.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\AttackL.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\HitD.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\WRYY.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\Blink.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\Death.wav type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\MUDAMUDA.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\ZaWardu.mp3 type mpegvideo", NULL, 0, 0);
	mciSendStringA("open Audio\\Dio\\Laugh.mp3 type mpegvideo", NULL, 0, 0);
}
void waitForTime(int start)
{
	while (true)
	{
		float  t = (clock() / (float)CLOCKS_PER_SEC * 1000.0f - start / (float)CLOCKS_PER_SEC * 1000.0f);
		if (t > 1.0f / 59* 1000.0f)
			break;
	}

}
int main(int argc, char *argv[]) {
	// Variables and flags used in the game.
	bool AttackJH = FALSE, AttackJL = FALSE, AttackDL = FALSE, AttackDH = FALSE, HitJ = FALSE, HitD = FALSE, SuperJ = FALSE, SuperD = FALSE, StandJ = FALSE, SuperJA = FALSE, StandD = FALSE, SuperDA = FALSE;
	bool HitDS = FALSE, HitJS = FALSE, DioDead = FALSE, JotaroDead = FALSE, Continue = TRUE;
	int i, j = 0, d = 0, JotaroHP = 50, DioHP = 50, CounterJ = 0, CounterD = 0, Y_Axis = CC212VSGL::getWindowHeight() - 309, SJ = 0, SD = 0;
	float xj = -75, yj = Y_Axis, changexj = xj, xd = CC212VSGL::getWindowWidth() + 45, yd = Y_Axis, changexd = xd, anglej = 0, angled = 0, xjs, yjs, xds, yds;
	CC212VSGL::setup();
	CC212VSGL::setFullScreenMode();
	CC212VSGL::hideCursor();
	//Using the read functions and loadins screen.
	ReadLoadingScreen();         LoadingScreen(0);
	ReadBackground();
	ReadSuperIcons();            LoadingScreen(1);
	ReadJotaroDeath();           ReadJotaroDeathR();
	ReadDioOutro();              ReadJotaroOutro();
	ReadDioDeath();              ReadDioDeathR();
	ReadDioSuper();              ReadDioSuperR();
	ReadDioStand();              ReadDioStandR();
	ReadJotaroSuper();           ReadJotaroSuperR();
	ReadJotaroStand();           ReadJotaroStandR();
	ReadJotaroIntro();           LoadingScreen(2);
	ReadDioIntro();
	ReadDioJ();                  ReadDioJR();
	ReadDioS();                  ReadDioSR();
	ReadDioH();                  ReadDioHR();
	ReadDioHealth();
	ReadDioAH();                 ReadDioAHR();
	ReadDioAL();                 ReadDioALR();
	ReadDioWB();                 ReadDioWBR();
	ReadDioWF();                 ReadDioWFR();
	ReadJotaroS();               ReadJotaroSR();
	ReadJotaroHealth();          LoadingScreen(3);
	ReadJotaroH();               ReadJotaroHR();
	ReadJotaroAH();              ReadJotaroAHR();
	ReadJotaroAL();              ReadJotaroALR();
	ReadJotaroJ();               ReadJotaroJR();
	ReadJotaroWB();              ReadJotaroWBR();
	ReadJotaroWF();              ReadJotaroWFR();
	LoadingScreen(4);            ReadAudio();
	srand(time(NULL));
	int intro, Jwin = 0, Dwin = 0;
	// Main game loop.
	while (TRUE) {
		intro = 0;
		if(rand()%2)
			mciSendStringA("play Audio\\StandProud.mp3 from 0 repeat", NULL, 0, 0);
		else
			mciSendStringA("play Audio\\YouSayRun.mp3 from 0 repeat", NULL, 0, 0);
		// Intro animation loop (breaks when the animation frames end).
		for (i = 0;;i++) {
			CC212VSGL::beginDraw();
			CC212VSGL::drawImage(Background[0], 0, 0, 0);
			if (Jwin)
				CC212VSGL::drawImage(Point, 575, 70, RGB(0, 0, 0));
			if (Dwin)
				CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 640, 70, RGB(0, 0, 0));
			CC212VSGL::drawImage(JotaroHealth[25], 10, 5, RGB(0, 0, 0));
			CC212VSGL::drawImage(DioHealth[25], CC212VSGL::getWindowWidth() - 660, 5, RGB(0, 0, 0));
			CC212VSGL::drawImage(DioIntro[intro], xd, yd, RGB(0, 0, 0));
			CC212VSGL::drawImage(JotaroIntro[intro], xj, yj, RGB(0, 0, 0));
			CC212VSGL::endDraw();
			if (intro == 2)
				mciSendStringA("play Audio\\Jotaro\\Doshta.mp3 from 0", NULL, 0, 0);
			if (intro == 7)
				mciSendStringA("play Audio\\Dio\\WRYY.mp3 from 0", NULL, 0, 0);
			if (i % 5 == 0)
				intro++;
			if (intro >= 31)
				break;
		}
		// The actual game loop (breaks if a character wins 2 rounds).
		while (Dwin<2 && Jwin<2) {
			i = 0;
			// The round loop (breaks if a character's health reaches 0 or less).
			while (!JotaroDead && !DioDead) {
				// The counter for the character's supers.
				if (CounterJ >= 20)
					SuperJ = TRUE;
				if (CounterD >= 20)
					SuperD = TRUE;
				if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
					return 0;
				}
				if (GetAsyncKeyState('W') & 0x8000 && !AttackJH && !AttackJL && !HitJ && !SuperJA && !HitJS) {
					if (yj >= Y_Axis)
						j = 0;
				}
				if (GetAsyncKeyState(VK_UP) & 0x8000 && !AttackDH && !AttackDL && !HitD && !SuperDA && !HitDS) {
					if (yd >= Y_Axis)
						d = 0;
				}
				// Control input and movement for the blue character.
				if (HitJ || SuperJA || HitJS);
				else {
					if ((GetAsyncKeyState('E') & 0x8000 || AttackJH) && !AttackJL) {
						if (!AttackJH && !(yj < Y_Axis))
							j = 0;
						AttackJH = TRUE;
						if (yj < Y_Axis) {
							if (xj <= -123) {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
								if (GetAsyncKeyState('D') & 0x8000)
									xj += 15;
							}
							else if (xj >= CC212VSGL::getWindowWidth() - 280) {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
								if (GetAsyncKeyState('A') & 0x8000)
									xj -= 15;
							}
							else {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
								if (GetAsyncKeyState('D') & 0x8000)
									xj += 15;
								if (GetAsyncKeyState('A') & 0x8000)
									xj -= 15;
							}
						}
					}
					else if (GetAsyncKeyState('Q') & 0x8000 || AttackJL) {
						if (!AttackJL && !(yj < Y_Axis))
							j = 0;
						AttackJL = TRUE;
						if (yj < Y_Axis) {
							if (xj <= -123) {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
								if (GetAsyncKeyState('D') & 0x8000)
									xj += 15;
							}
							else if (xj >= CC212VSGL::getWindowWidth() - 280) {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
								if (GetAsyncKeyState('A') & 0x8000)
									xj -= 15;
							}
							else {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
								if (GetAsyncKeyState('D') & 0x8000)
									xj += 15;
								if (GetAsyncKeyState('A') & 0x8000)
									xj -= 15;
							}
						}
					}
					else if (GetAsyncKeyState('R') & 0x8000 && yj >= Y_Axis && SuperJ == TRUE) {
						SuperJ = FALSE;
						StandJ = TRUE;
						SuperJA = TRUE;
						j = 0;
						SJ = 0;
						CounterJ = 0;
						if (xj < xd)
							xjs = xj;
						else
							xjs = xj - 90;
						yjs = yj - 10;
					}
					else {
						if ((GetAsyncKeyState('W') & 0x8000 && GetAsyncKeyState('A') & 0x8000) || yj < Y_Axis && GetAsyncKeyState('A') & 0x8000) {
							if (xj <= -123) {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
							}
							else {
								yj -= 26 * sin(M_PI*anglej);
								xj -= 15;
								anglej += 0.05;
							}
						}
						else if ((GetAsyncKeyState('W') & 0x8000 && GetAsyncKeyState('D') & 0x8000) || yj < Y_Axis && GetAsyncKeyState('D') & 0x8000) {
							if (xj >= CC212VSGL::getWindowWidth() - 280) {
								yj -= 26 * sin(M_PI*anglej);
								anglej += 0.05;
							}
							else {
								yj -= 26 * sin(M_PI*anglej);
								xj += 15;
								anglej += 0.05;
							}
						}
						else if (GetAsyncKeyState('W') & 0x8000 || yj < Y_Axis) {
							yj -= 26 * sin(M_PI*anglej);
							anglej += 0.05;
						}
						else if (GetAsyncKeyState('A') & 0x8000) {
							if (xj <= -123);
							else if (xj > xd && xj < xd + 100 && yd >= Y_Axis)
								changexj++;
							else
								xj -= 8;
						}
						else if (GetAsyncKeyState('D') & 0x8000) {
							if (xj >= CC212VSGL::getWindowWidth() - 280);
							else if (xj > xd - 130 && xj < xd && yd >= Y_Axis)
								changexj--;
							else
								xj += 8;
						}
					}
				}
				// Control input and movement for yellow character.
				if (HitD || SuperDA || HitDS);
				else {
					if ((GetAsyncKeyState('I') & 0x8000 || AttackDH) && !AttackDL) {
						if (!AttackDH && !(yd < Y_Axis))
							d = 0;
						AttackDH = TRUE;
						if (yd < Y_Axis) {
							if (xd <= -123) {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
								if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
									xd += 15;
							}
							else if (xd >= CC212VSGL::getWindowWidth() - 280) {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
								if (GetAsyncKeyState(VK_LEFT) & 0x8000)
									xd -= 15;
							}
							else {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
								if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
									xd += 15;
								if (GetAsyncKeyState(VK_LEFT) & 0x8000)
									xd -= 15;
							}
						}
					}
					else if (GetAsyncKeyState('U') & 0x8000 || AttackDL) {
						if (!AttackDL && !(yd < Y_Axis))
							d = 0;
						AttackDL = TRUE;
						if (yd < Y_Axis) {
							if (xd <= -123) {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
								if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
									xd += 15;
							}
							else if (xd >= CC212VSGL::getWindowWidth() - 280) {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
								if (GetAsyncKeyState(VK_LEFT) & 0x8000)
									xd -= 15;
							}
							else {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
								if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
									xd += 15;
								if (GetAsyncKeyState(VK_LEFT) & 0x8000)
									xd -= 15;
							}
						}
					}
					else if (GetAsyncKeyState('O') & 0x8000 && yd >= Y_Axis && SuperD == TRUE) {
						SuperD = FALSE;
						StandD = TRUE;
						SuperDA = TRUE;
						d = 0;
						SD = 0;
						CounterD = 0;
						if (xd < xj)
							xds = xd;
						else
							xds = xd - 94;
						yds = yd - 5;
					}
					else {
						if ((GetAsyncKeyState(VK_UP) & 0x8000 && GetAsyncKeyState(VK_LEFT) & 0x8000) || yd < Y_Axis && GetAsyncKeyState(VK_LEFT) & 0x8000) {
							if (xd <= -123) {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
							}
							else {
								yd -= 26 * sin(M_PI*angled);
								xd -= 15;
								angled += 0.05;
							}
						}
						else if ((GetAsyncKeyState(VK_UP) & 0x8000 && GetAsyncKeyState(VK_RIGHT) & 0x8000) || yd < Y_Axis && GetAsyncKeyState(VK_RIGHT) & 0x8000) {
							if (xd >= CC212VSGL::getWindowWidth() - 280) {
								yd -= 26 * sin(M_PI*angled);
								angled += 0.05;
							}
							else {
								yd -= 26 * sin(M_PI*angled);
								xd += 15;
								angled += 0.05;
							}
						}
						else if (GetAsyncKeyState(VK_UP) & 0x8000 || yd < Y_Axis) {
							yd -= 26 * sin(M_PI*angled);
							angled += 0.05;
						}
						else if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
							if (xd <= -123);
							else if (xd > xj && xd < xj + 130 && yj >= Y_Axis) {
								changexd++;
							}
							else
								xd -= 8;
						}
						else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
							if (xd >= CC212VSGL::getWindowWidth() - 280);
							else if (xd > xj - 100 && xd < xj  && yj >= Y_Axis) {
								changexd--;
							}
							else
								xd += 8;
						}
					}
				}
				// Drawing the animation.
				CC212VSGL::beginDraw();
				CC212VSGL::drawImage(Background[i], 0, 0, 0); // Background.
				if (yd < Y_Axis) {
					if (xd > xj)
						CC212VSGL::drawImage(DioJ[d], xd, yd, RGB(0, 0, 0)); // Yellow character jumping.
					else
						CC212VSGL::drawImage(DioJR[d], xd, yd, RGB(0, 0, 0)); // Yellow character jumping in reverse.
					changexd = xd;
				}
				else if (HitDS) {
					if (d == 0)
						mciSendStringA("play Audio\\Dio\\HitD.wav from 0", NULL, 0, 0);
					if (d == 3)
						mciSendStringA("play Audio\\Dio\\Pain.wav from 0", NULL, 0, 0);
					if (xd > xjs)
						CC212VSGL::drawImage(DioH[d], xd, yd, RGB(0, 0, 0)); // Yellow character getting hit by a super.
					else
						CC212VSGL::drawImage(DioHR[d], xd, yd, RGB(0, 0, 0)); // Yellow character getting hit by a super in reverse.
					if (d > 4) {
						SuperDA = FALSE;
						AttackDL = FALSE;
						AttackDH = FALSE;
						HitDS = FALSE;
						d = 0;
					}
					if (xd <= -123);
					else if (xd >= CC212VSGL::getWindowWidth() - 280);
					else {
						if (xjs > xd)
							xd -= 5;
						else
							xd += 5;
					}
					changexd = xd;
				}
				else if (HitD) {
					if (d == 0) {
						mciSendStringA("play Audio\\Dio\\HitD.wav from 0", NULL, 0, 0);
						mciSendStringA("play Audio\\Dio\\Pain.wav from 0", NULL, 0, 0);
						CounterD++; // Increasing the yellow character's counter after getting hit.
					}
					if (xd > xj)
						CC212VSGL::drawImage(DioH[d], xd, yd, RGB(0, 0, 0)); // Yellow character getting hit.
					else
						CC212VSGL::drawImage(DioHR[d], xd, yd, RGB(0, 0, 0)); // Yellow character getting hit in reverse.
					if (d > 4) {
						SuperDA = FALSE;
						HitD = FALSE;
						d = 0;
					}
					if (xd <= -123) {
						xj += 6;
					}
					else if (xd >= CC212VSGL::getWindowWidth() - 280) {
						xj -= 6;
					}
					else {
						if (xj > xd)
							xd -= 5;
						else
							xd += 5;
					}
					changexj = xj;
					changexd = xd;
				}
				else {
					if (SuperDA && !HitD && !HitDS) {
						if (d == 0)
							mciSendStringA("play Audio\\Dio\\ZaWardu.mp3 from 0", NULL, 0, 0);
						if (xd > xj)
							CC212VSGL::drawImage(DioSuper[d], xd, yd, RGB(0, 0, 0)); // Yellow character super animation.
						else
							CC212VSGL::drawImage(DioSuperR[d], xd, yd, RGB(0, 0, 0)); // Yellow character super animation in reverse.
						if (d > 3) {
							d = 0;
							SuperDA = FALSE;
						}
					}
					else if (AttackDH) {
						if (d == 0)
							mciSendStringA("play Audio\\Dio\\AttackH.wav from 0", NULL, 0, 0);
						if (xd > xj)
							CC212VSGL::drawImage(DioAH[d], xd, yd, RGB(0, 0, 0)); // Yellow character heavy attack.
						else
							CC212VSGL::drawImage(DioAHR[d], xd, yd, RGB(0, 0, 0)); // Yellow character heavy attack in reverse.
						if (d == 3 && (xd < xj + 245 && xd > xj - 245) && yj >= Y_Axis) {
							JotaroHP -= 2;
							HitJ = TRUE;
							j = 0;
							AttackJH = FALSE;
							AttackJL = FALSE;
							CounterD += 2;
						}
						if (d > 10) {
							AttackDH = FALSE;
						}
					}
					else if (AttackDL) {
						if (d == 0)
							mciSendStringA("play Audio\\Dio\\AttackL.wav from 0", NULL, 0, 0);
						if (xd > xj)
							CC212VSGL::drawImage(DioAL[d], xd, yd, RGB(0, 0, 0)); // Yellow character light attack.
						else
							CC212VSGL::drawImage(DioALR[d], xd, yd, RGB(0, 0, 0)); // Yellow character light attack in reverse.
						if (d == 3 && (xd < xj + 235 && xd > xj - 235) && yj >= Y_Axis) {
							JotaroHP--;
							HitJ = TRUE;
							j = 0;
							AttackJH = FALSE;
							AttackJL = FALSE;
							CounterD += 2;
						}
						if (d > 5) {
							AttackDL = FALSE;
						}
					}
					else if (changexd == xd) {
						if (d % 38 == 0)
							d = 0;
						if (xd > xj)
							CC212VSGL::drawImage(DioS[d], xd, yd, RGB(0, 0, 0)); // Yellow character idle stance.
						else
							CC212VSGL::drawImage(DioSR[d], xd, yd, RGB(0, 0, 0)); // Yellow character idle stance in reverse.
					}
					else if (changexd > xd) {
						if (d > 15)
							d = 0;
						if (xd > xj)
							CC212VSGL::drawImage(DioWF[d], xd, yd, RGB(0, 0, 0)); // Yellow character walking forwad.
						else
							CC212VSGL::drawImage(DioWBR[d], xd, yd, RGB(0, 0, 0)); // Yellow character walking backwards in reverse.
						changexd = xd;
					}
					else if (changexd < xd) {
						if (d > 15)
							d = 0;
						if (xd > xj)
							CC212VSGL::drawImage(DioWB[d], xd, yd, RGB(0, 0, 0)); // Yellow character walking backwards.
						else
							CC212VSGL::drawImage(DioWFR[d], xd, yd, RGB(0, 0, 0)); // Yellow character walking forward in reverse.
						changexd = xd;
					}
				}
				if (yj < Y_Axis) {
					if (xj < xd)
						CC212VSGL::drawImage(JotaroJ[j], xj, yj, RGB(0, 0, 0)); // Blue character Jump.
					else
						CC212VSGL::drawImage(JotaroJR[j], xj, yj, RGB(0, 0, 0)); // Blue character Jump in reverse.
					changexj = xj;
				}
				else if (HitJS) {
					if (j == 0)
						mciSendStringA("play Audio\\Jotaro\\HitJ.wav from 0", NULL, 0, 0);
					if (j == 3)
						mciSendStringA("play Audio\\Jotaro\\Pain.wav from 0", NULL, 0, 0);
					if (xj < xds)
						CC212VSGL::drawImage(JotaroH[j], xj, yj, RGB(0, 0, 0)); // Blue character getting hit by a super.
					else
						CC212VSGL::drawImage(JotaroHR[j], xj, yj, RGB(0, 0, 0)); // Blue character getting hit by a super in reverse.
					if (j > 2) {
						SuperJA = FALSE;
						AttackJL = FALSE;
						AttackJH = FALSE;
						HitJS = FALSE;
						j = 0;
					}
					if (xj <= -123);
					else if (xj >= CC212VSGL::getWindowWidth() - 280);
					else {
						if (xds > xj)
							xj -= 5;
						else
							xj += 5;
					}
					changexj = xj;
				}
				else if (HitJ) {
					if (j == 0) {
						mciSendStringA("play Audio\\Jotaro\\HitJ.wav from 0", NULL, 0, 0);
						mciSendStringA("play Audio\\Jotaro\\Pain.wav from 0", NULL, 0, 0);
						CounterJ++;
					}
					if (xj < xd)
						CC212VSGL::drawImage(JotaroH[j], xj, yj, RGB(0, 0, 0)); // Blue character getting hit.
					else
						CC212VSGL::drawImage(JotaroHR[j], xj, yj, RGB(0, 0, 0)); // Blue character getting hit in reverse.
					if (j > 2) {
						SuperJA = FALSE;
						HitJ = FALSE;
						j = 0;
					}
					if (xj <= -123) {
						xd += 6;
					}
					else if (xj >= CC212VSGL::getWindowWidth() - 280) {
						xd -= 6;
					}
					else {
						if (xj > xd)
							xj += 5;
						else
							xj -= 5;
					}
					changexj = xj;
					changexd = xd;
				}
				else {
					if (SuperJA && !HitJ && !HitJS) {
						if (j == 0)
							mciSendStringA("play Audio\\Jotaro\\StarPlatinum.mp3 from 0", NULL, 0, 0);
						if (xj < xd)
							CC212VSGL::drawImage(JotaroSuper[j], xj, yj, RGB(0, 0, 0)); // Blue character super.
						else
							CC212VSGL::drawImage(JotaroSuperR[j], xj, yj, RGB(0, 0, 0)); // Blue character super in reverse.
						if (j > 3) {
							j = 0;
							SuperJA = FALSE;
						}
					}
					else if (AttackJH) {
						if (j == 0)
							mciSendStringA("play Audio\\Jotaro\\AttackH.wav from 0", NULL, 0, 0);
						if (xj < xd)
							CC212VSGL::drawImage(JotaroAH[j], xj, yj, RGB(0, 0, 0)); // Blue character heavy attack.
						else
							CC212VSGL::drawImage(JotaroAHR[j], xj, yj, RGB(0, 0, 0)); // Blue character heavy attack in reverse.
						if (j == 3 && (xj < xd + 245 && xj > xd - 245) && yd >= Y_Axis) {
							DioHP -= 2;
							HitD = TRUE;
							AttackDL = FALSE;
							AttackDH = FALSE;
							d = 0;
							CounterJ += 2;
						}
						if (j > 8) {
							AttackJH = FALSE;
						}
					}
					else if (AttackJL) {
						if (j == 0)
							mciSendStringA("play Audio\\Jotaro\\AttackL.wav from 0", NULL, 0, 0);
						if (xj < xd)
							CC212VSGL::drawImage(JotaroAL[j], xj, yj, RGB(0, 0, 0)); // Blue character light attack.
						else
							CC212VSGL::drawImage(JotaroALR[j], xj, yj, RGB(0, 0, 0)); // Blue character light attack in reverse.
						if (j == 1 && (xj < xd + 152 && xj > xd - 152) && yd >= Y_Axis) {
							DioHP--;
							HitD = TRUE;
							AttackDL = FALSE;
							AttackDH = FALSE;
							d = 0;
							CounterJ += 2;
						}
						if (j > 6) {
							AttackJL = FALSE;
						}
					}
					else if (changexj == xj) {
						if (j % 24 == 0)
							j = 0;
						if (xj < xd)
							CC212VSGL::drawImage(JotaroS[j], xj, yj, RGB(0, 0, 0)); // Blue character idle stance.
						else
							CC212VSGL::drawImage(JotaroSR[j], xj, yj, RGB(0, 0, 0)); // Blue character idle stance in reverse.
					}
					else if (changexj < xj) {
						if (j > 15)
							j = 0;
						if (xj < xd)
							CC212VSGL::drawImage(JotaroWF[j], xj, yj, RGB(0, 0, 0)); // Blue character walking forward.
						else
							CC212VSGL::drawImage(JotaroWBR[j], xj, yj, RGB(0, 0, 0)); // Blue character walking backward in reverse.
						changexj = xj;
					}
					else if (changexj > xj) {
						if (j > 15)
							j = 0;
						if (xj < xd)
							CC212VSGL::drawImage(JotaroWB[j], xj, yj, RGB(0, 0, 0)); // Blue character walking backward.
						else
							CC212VSGL::drawImage(JotaroWFR[j], xj, yj, RGB(0, 0, 0)); // Blue character walking forward in reverse.
						changexj = xj;
					}
				}
				if (StandJ) {
					if(SJ==0)
						mciSendStringA("play Audio\\Jotaro\\Blink.wav from 0", NULL, 0, 0);
					if(SJ==4)
						mciSendStringA("play Audio\\Jotaro\\ORAORA.mp3 from 0", NULL, 0, 0);
					if (xjs < xd)
						CC212VSGL::drawImage(JotaroStand[SJ], xjs, yjs, RGB(0, 0, 0)); // Blue character stand.
					else
						CC212VSGL::drawImage(JotaroStandR[SJ], xjs, yjs, RGB(0, 0, 0)); // Blue character stand in reverse.
					if (SJ > 36) {
						SJ = 0;
						StandJ = FALSE;
					}
					if (SJ > 4 && SJ < 32 && (xjs < xd + 220 && xjs > xd - 310) && yd >= Y_Axis) { // Blue stand hitbox.
						if (SJ % 2 == 0)
							DioHP--;
						HitDS = TRUE;
						d = 0;
					}
					if (i % 2 == 0)
						SJ++;
				}
				if (StandD) {
					if (SD == 0)
						mciSendStringA("play Audio\\Dio\\Blink.wav from 0", NULL, 0, 0);
					if (SD == 3)
						mciSendStringA("play Audio\\Dio\\MUDAMUDA.mp3 from 0", NULL, 0, 0);
					if (xds < xj)
						CC212VSGL::drawImage(DioStandR[SD], xds, yds, RGB(0, 0, 0)); // Yellow character stand in reverse,
					else
						CC212VSGL::drawImage(DioStand[SD], xds, yds, RGB(0, 0, 0)); // Yellow character stand.
					if (SD > 34) {
						SD = 0;
						StandD = FALSE;
					}
					if (i % 2 == 0)
						SD++;
				}
				// HUD (Health bars, Super icons, Win points)
				if (DioHP <= 0) {
					DioDead = TRUE;
					CC212VSGL::drawImage(DioHealth[0], CC212VSGL::getWindowWidth() - 660, 5, RGB(0, 0, 0));
				}
				else
					CC212VSGL::drawImage(DioHealth[DioHP / 2], CC212VSGL::getWindowWidth() - 660, 5, RGB(0, 0, 0));
				if (JotaroHP <= 0) {
					JotaroDead = TRUE;
					CC212VSGL::drawImage(JotaroHealth[0], 10, 5, RGB(0, 0, 0));
				}
				else
					CC212VSGL::drawImage(JotaroHealth[JotaroHP / 2], 10, 5, RGB(0, 0, 0));
				if (Jwin)
					CC212VSGL::drawImage(Point, 575, 70, RGB(0, 0, 0));
				if (Dwin)
					CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 640, 70, RGB(0, 0, 0));
				if (SuperD)
					CC212VSGL::drawImage(SuperIcons[0], CC212VSGL::getWindowWidth() - 250, 0, RGB(0, 0, 0));
				if (SuperJ)
					CC212VSGL::drawImage(SuperIcons[1], 50, 0, RGB(0, 0, 0));
				if (i % 2 == 0) { // Increasing the character's frames.
					j++;
					d++;
				}
				if (StandD)
					if (SD > 4 && SD < 32 && (xds < xj + 220 && xds > xj - 310) && yj >= Y_Axis) { // Yellow stand hitbox.
						if (SD % 2 == 0)
							JotaroHP--;
						HitJS = TRUE;
						j = 0;
					}
				CC212VSGL::endDraw();
				waitForTime(clock());
				i++;
				if (i > 218)
					i = 0;
			}
			mciSendStringA("stop Audio\\Jotaro\\ORAORA.mp3", NULL, 0, 0);
			mciSendStringA("stop Audio\\Dio\\MUDAMUDA.mp3", NULL, 0, 0);
			// Outro after a round.
			d = 0;
			if (DioDead) {
				mciSendStringA("play Audio\\Dio\\Death.wav from 0", NULL, 0, 0);
				Jwin++;
				while (TRUE) {
					if (i > 218)
						i = 0;
					CC212VSGL::beginDraw();
					CC212VSGL::drawImage(Background[i / 2], 0, 0, 0);
					if (Jwin)
						CC212VSGL::drawImage(Point, 575, 70, RGB(0, 0, 0));
					if(Jwin==2)
						CC212VSGL::drawImage(Point, 535, 70, RGB(0, 0, 0));
					if (Dwin)
						CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 640, 70, RGB(0, 0, 0));
					CC212VSGL::drawImage(DioHealth[0], CC212VSGL::getWindowWidth() - 660, 5, RGB(0, 0, 0));
					CC212VSGL::drawImage(JotaroHealth[JotaroHP / 2], 10, 5, RGB(0, 0, 0));
					if (xd > xj) {
						CC212VSGL::drawImage(DioDeath[d], xd, yd, RGB(0, 0, 0));
						if (yj < Y_Axis) {
							CC212VSGL::drawImage(JotaroJ[d + 6], xj, yj, RGB(0, 0, 0));
							yj -= 26 * sin(M_PI*anglej);
							anglej += 0.05;
						}
						else
						    CC212VSGL::drawImage(JotaroS[d], xj, yj, RGB(0, 0, 0));
						if (xd >= CC212VSGL::getWindowWidth() - 380);
						else {
							xd += 6;
						}
					}
					else {
						CC212VSGL::drawImage(DioDeathR[d], xd, yd, RGB(0, 0, 0));
						if (yj < Y_Axis) {
							CC212VSGL::drawImage(JotaroJR[d + 6], xj, yj, RGB(0, 0, 0));
							yj -= 26 * sin(M_PI*anglej);
							anglej += 0.05;
						}
						else
							CC212VSGL::drawImage(JotaroSR[d], xj, yj, RGB(0, 0, 0));
						if (xd <= -15);
						else {
							xd -= 6;
						}
					}
					CC212VSGL::endDraw();
					if (i % 6 == 0)
						d++;
					if (d > 14)
						break;
					i++;
				}
				d = 0;
				while (TRUE) {
					if (i > 218)
						i = 0;
					CC212VSGL::beginDraw();
					CC212VSGL::drawImage(Background[i / 2], 0, 0, 0);
					if (Jwin)
						CC212VSGL::drawImage(Point, 575, 70, RGB(0, 0, 0));
					if(Jwin==2)
						CC212VSGL::drawImage(Point, 535, 70, RGB(0, 0, 0));
					if (Dwin)
						CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 640, 70, RGB(0, 0, 0));
					CC212VSGL::drawImage(DioHealth[0], CC212VSGL::getWindowWidth() - 660, 5, RGB(0, 0, 0));
					CC212VSGL::drawImage(JotaroHealth[JotaroHP / 2], 10, 5, RGB(0, 0, 0));
					CC212VSGL::drawImage(JotaroOutro[d], xj, yj, RGB(0, 0, 0));
					if (xd > xj)
						CC212VSGL::drawImage(DioDeath[15], xd, yd, RGB(0, 0, 0));
					else
						CC212VSGL::drawImage(DioDeathR[15], xd, yd, RGB(0, 0, 0));
					if (d > 23 && Jwin == 2)
						CC212VSGL::drawImage(Rematch, CC212VSGL::getWindowWidth() - 900, CC212VSGL::getWindowHeight() - 500, RGB(255, 255, 255));
					CC212VSGL::endDraw();
					if (i % 9 == 0)
						d++;
					if(d==4)
						mciSendStringA("play Audio\\Jotaro\\YareYare.mp3 from 0", NULL, 0, 0);
					if (d > 24)
						break;
					i++;
				}
			}
			else if (JotaroDead) {
				mciSendStringA("play Audio\\Jotaro\\Death.wav from 0", NULL, 0, 0);
				Dwin++;
				while (TRUE) {
					if (i > 218)
						i = 0;
					CC212VSGL::beginDraw();
					CC212VSGL::drawImage(Background[i / 2], 0, 0, 0);
					if (Jwin)
						CC212VSGL::drawImage(Point, 575, 70, RGB(0, 0, 0));
					if (Dwin)
						CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 640, 70, RGB(0, 0, 0));
					if(Dwin==2)
						CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 600, 70, RGB(0, 0, 0));
					CC212VSGL::drawImage(DioHealth[DioHP / 2], CC212VSGL::getWindowWidth() - 660, 5, RGB(0, 0, 0));
					CC212VSGL::drawImage(JotaroHealth[0], 10, 5, RGB(0, 0, 0));
					if (xj < xd) {
						CC212VSGL::drawImage(JotaroDeath[d], xj, yj, RGB(0, 0, 0));
						if (yd < Y_Axis) {
							CC212VSGL::drawImage(DioJ[d + 6], xd, yd, RGB(0, 0, 0));
							yd -= 26 * sin(M_PI*angled);
							angled += 0.05;
						}
						else
							CC212VSGL::drawImage(DioS[d], xd, yd, RGB(0, 0, 0));
						if (xj <= -15);
						else {
							xj -= 5;
						}
					}
					else {
						CC212VSGL::drawImage(JotaroDeathR[d], xj, yj, RGB(0, 0, 0));
						if (yd < Y_Axis) {
							CC212VSGL::drawImage(DioJR[d + 6], xd, yd, RGB(0, 0, 0));
							yd -= 26 * sin(M_PI*angled);
							angled += 0.05;
						}
						else
							CC212VSGL::drawImage(DioSR[d], xd, yd, RGB(0, 0, 0));
						if (xj >= CC212VSGL::getWindowWidth() - 380);
						else {
							xj += 5;
						}
					}
					CC212VSGL::endDraw();
					if (i % 6 == 0)
						d++;
					if (d > 16)
						break;
					i++;
				}
				d = 0;
				while (TRUE) {
					if (i > 218)
						i = 0;
					CC212VSGL::beginDraw();
					CC212VSGL::drawImage(Background[i / 2], 0, 0, 0);
					if (Jwin)
						CC212VSGL::drawImage(Point, 575, 70, RGB(0, 0, 0));
					if (Dwin)
						CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 640, 70, RGB(0, 0, 0));
					if(Dwin==2)
						CC212VSGL::drawImage(Point, CC212VSGL::getWindowWidth() - 600, 70, RGB(0, 0, 0));
					CC212VSGL::drawImage(DioHealth[DioHP / 2], CC212VSGL::getWindowWidth() - 660, 5, RGB(0, 0, 0));
					CC212VSGL::drawImage(JotaroHealth[0], 10, 5, RGB(0, 0, 0));
					CC212VSGL::drawImage(DioOutro[d], xd, yd, RGB(0, 0, 0));
					if (xj < xd)
						CC212VSGL::drawImage(JotaroDeath[17], xj, yj, RGB(0, 0, 0));
					else
						CC212VSGL::drawImage(JotaroDeathR[17], xj, yj, RGB(0, 0, 0));
					if (d > 23 && Dwin == 2)
						CC212VSGL::drawImage(Rematch, CC212VSGL::getWindowWidth() - 900, CC212VSGL::getWindowHeight() - 500, RGB(255, 255, 255));
					CC212VSGL::endDraw();
					if (i % 9 == 0)
						d++;
					if (d == 4)
						mciSendStringA("play Audio\\Dio\\Laugh.mp3 from 0", NULL, 0, 0);
					if (d > 24)
						break;
					i++;
				}
			}
			// After the final outro a rematch slide appears.
			// Reseting almost all variables for the next round.
			AttackJH = FALSE, AttackJL = FALSE, AttackDL = FALSE, AttackDH = FALSE, HitJ = FALSE, HitD = FALSE, SuperJ = FALSE, SuperD = FALSE, StandJ = FALSE, SuperJA = FALSE, StandD = FALSE, SuperDA = FALSE;
			HitDS = FALSE, HitJS = FALSE, DioDead = FALSE, JotaroDead = FALSE;
			j = 0, d = 0, JotaroHP = 50, DioHP = 50, CounterJ = 0, CounterD = 0, SJ = 0, SD = 0;
			xj = -75, changexj = xj, xd = CC212VSGL::getWindowWidth() - 325, changexd = xd, anglej = 0, angled = 0;
		}
		// Input for the rematch slide. 
		while (true) {
			if (GetAsyncKeyState('Y') & 0x8000) {
				mciSendStringA("play Audio\\Click.wav from 0", NULL, 0, 0);
				mciSendStringA("stop Audio\\StandProud.mp3", NULL, 0, 0);
				mciSendStringA("stop Audio\\YouSayRun.mp3", NULL, 0, 0);
				Dwin = 0;
				Jwin = 0;
				break;
			}
			else if (GetAsyncKeyState('N') & 0x8000) {
				return 0;
			}
		}
	}
}