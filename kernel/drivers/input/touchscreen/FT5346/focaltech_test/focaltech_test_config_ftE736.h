/************************************************************************
* Copyright (C) 2012-2016, Focaltech Systems (R)，All Rights Reserved.
*
* File Name: Config_FTE736.h
*
* Author: Software Development Team, AE
*
* Created: 2016-05-19
*
* Abstract: Set Config for FTE736
*
************************************************************************/
#ifndef _CONFIG_FTE736_H
#define _CONFIG_FTE736_H

#include "focaltech_test_main.h"


struct stCfg_FTE736_TestItem
{
	bool FW_VERSION_TEST;
	bool FACTORY_ID_TEST;
	bool PROJECT_CODE_TEST;
	bool IC_VERSION_TEST;
	bool RAWDATA_TEST;
	bool CHANNEL_NUM_TEST;
	bool INT_PIN_TEST;
	bool RESET_PIN_TEST;
	bool NOISE_TEST;
	bool CB_TEST;
	bool SHORT_TEST;
	bool OPEN_TEST;
	bool CB_UNIFORMITY_TEST;
	bool DIFFER_UNIFORMITY_TEST;
	bool DIFFER2_UNIFORMITY_TEST;

};
struct stCfg_FTE736_BasicThreshold
{
	BYTE FW_VER_VALUE;
	BYTE Factory_ID_Number;
	char Project_Code[32];
	BYTE IC_Version;
	int RawDataTest_Min;
	int RawDataTest_Max;
	BYTE ChannelNumTest_ChannelXNum;
	BYTE ChannelNumTest_ChannelYNum;
	BYTE ChannelNumTest_KeyNum;
	BYTE ResetPinTest_RegAddr;
	BYTE IntPinTest_RegAddr;
	int NoiseTest_Coefficient;
	int NoiseTest_Frames;
	int NoiseTest_Time;
	BYTE NoiseTest_SampeMode;
	BYTE NoiseTest_NoiseMode;
	BYTE NoiseTest_ShowTip;
	bool bCBTest_VA_Check;
	int CbTest_Min;
	int CbTest_Max;
	bool bCBTest_VKey_Check;
	int CbTest_Min_Vkey;
	int CbTest_Max_Vkey;

	int ShortCircuit_ResMin;
	//int ShortTest_K2Value;
	int OpenTest_CBMin;

	bool CBUniformityTest_Check_CHX;
	bool CBUniformityTest_Check_CHY;
	bool CBUniformityTest_Check_MinMax;
	int CBUniformityTest_CHX_Hole;
	int CBUniformityTest_CHY_Hole;
	int CBUniformityTest_MinMax_Hole;

	bool DifferUniformityTest_Check_CHX;
	bool DifferUniformityTest_Check_CHY;
	bool DifferUniformityTest_Check_MinMax;
	int DifferUniformityTest_CHX_Hole;
	int DifferUniformityTest_CHY_Hole;
	int DifferUniformityTest_MinMax_Hole;
	int DeltaVol;

	bool Differ2UniformityTest_Check_CHX;
	bool Differ2UniformityTest_Check_CHY;
	int Differ2UniformityTest_CHX_Hole;
	int Differ2UniformityTest_CHY_Hole;
	int Differ2UniformityTest_Differ_Min;
	int Differ2UniformityTest_Differ_Max;

};
enum enumTestItem_FTE736
{
	Code_FTE736_ENTER_FACTORY_MODE,//所有IC都必备的测试项
	Code_FTE736_DOWNLOAD,//所有IC都必备的测试项
	Code_FTE736_UPGRADE,//所有IC都必备的测试项
	Code_FTE736_FACTORY_ID_TEST,
	Code_FTE736_PROJECT_CODE_TEST,
	Code_FTE736_FW_VERSION_TEST,
	Code_FTE736_IC_VERSION_TEST,
	Code_FTE736_RAWDATA_TEST,
	Code_FTE736_CHANNEL_NUM_TEST,
	//Code_FTE736_CHANNEL_SHORT_TEST,
	Code_FTE736_INT_PIN_TEST,
	Code_FTE736_RESET_PIN_TEST,
	Code_FTE736_NOISE_TEST,
	Code_FTE736_CB_TEST,
	//Code_FTE736_DELTA_CB_TEST,
	//Code_FTE736_CHANNELS_DEVIATION_TEST,
	//Code_FTE736_TWO_SIDES_DEVIATION_TEST,
	//Code_FTE736_FPC_SHORT_TEST,
	//Code_FTE736_FPC_OPEN_TEST,
	//Code_FTE736_SREF_OPEN_TEST,
	//Code_FTE736_TE_TEST,
	//Code_FTE736_CB_DEVIATION_TEST,
	Code_FTE736_WRITE_CONFIG,//所有IC都必备的测试项
	//Code_FTE736_DIFFER_TEST,
	Code_FTE736_SHORT_CIRCUIT_TEST,
	Code_FTE736_OPEN_TEST,
	Code_FTE736_CB_UNIFORMITY_TEST,
	Code_FTE736_DIFFER_UNIFORMITY_TEST,
	Code_FTE736_DIFFER2_UNIFORMITY_TEST,
};

//struct stCfg_FTE736_TestItem g_stCfg_FTE736_TestItem;
//struct stCfg_FTE736_BasicThreshold g_stCfg_FTE736_BasicThreshold;
//extern CString g_strEnumTestItem_FTE736[];
extern struct stCfg_FTE736_TestItem g_stCfg_FTE736_TestItem;
extern struct stCfg_FTE736_BasicThreshold g_stCfg_FTE736_BasicThreshold;

void OnInit_FTE736_TestItem(char *strIniFile);
void OnInit_FTE736_BasicThreshold(char *strIniFile);
void SetTestItem_FTE736(void);
	
#endif
