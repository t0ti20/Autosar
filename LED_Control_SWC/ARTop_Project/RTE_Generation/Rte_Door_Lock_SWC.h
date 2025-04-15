/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_Door_Lock_SWC.h
 * Generated on: Tue Apr 15 6:42:33 EET
 ********************************************************************/

#ifndef RTE_DOOR_LOCK_SWC_H
#define RTE_DOOR_LOCK_SWC_H

#include "Rte_Door_Lock_SWC_Type.h"

#ifdef __cplusplus
	extern "C" {
#endif /* __cplusplus */

/**************** component data structure definition ****************/

#ifndef IN_RTE_C
typedef const Rte_CDS_Door_Lock_SWC * const Rte_Instance;
#endif

/************************* instance handle ***************************/

extern const Rte_CDS_Door_Lock_SWC * const Rte_Inst_Door_Lock_SWC;

/************************ application errors *************************/

#define RTE_E_Client_Server_Interface_Control_LED_E_OK ((Std_ReturnType)0)
#define RTE_E_Client_Server_Interface_Control_LED_E_NOT_OK ((Std_ReturnType)1)

/*************************** init values *****************************/


/****************** per instance memory definition *******************/


/************************* exclusive areas ***************************/


/************************* RTE API mapping ***************************/

/*****************************************************
 * Port: 		Get_Sensor_State_Receiver
 * Interface:	Sender_Receiver_Interface_Door_Sensor
 * DataElement:	Current_State
 * Runnable:	Door_Lock_Logic
 *****************************************************/
extern Door_State_t Rte_IRead_Door_Lock_SWC_Door_Lock_Logic_Get_Sensor_State_Receiver_Current_State (void);
#ifndef IN_RTE_C
#define Rte_IRead_Door_Lock_Logic_Get_Sensor_State_Receiver_Current_State() \
	Rte_IRead_Door_Lock_SWC_Door_Lock_Logic_Get_Sensor_State_Receiver_Current_State()
#endif

/*****************************************************
 * Port: 		Control_Led_State_Client
 * Interface:	Client_Server_Interface_Control_LED
 * Operation:	Set_LED_State
 * Sync/Async:	Synchronous
 *****************************************************/
extern Std_ReturnType Rte_Call_Door_Lock_SWC_Control_Led_State_Client_Set_LED_State (LED_State_t LED_State);
#ifndef IN_RTE_C
#define Rte_Call_Control_Led_State_Client_Set_LED_State(LED_State) \
	Rte_Call_Door_Lock_SWC_Control_Led_State_Client_Set_LED_State(LED_State)
#endif


/**************** event triggered runnable entities *******************/

/*****************************************************
 * Runnable: 	Door_Lock_Logic
 * Period:		0.015
 *****************************************************/
extern void Door_Lock_Logic_Runnable(void);


/******** ARUnit-specific function pointers for server call delegates *********/
typedef Std_ReturnType (*FunctionPtr_Door_Lock_SWC_Control_Led_State_Client_Set_LED_State)(LED_State_t LED_State);


#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_DOOR_LOCK_SWC_H */
