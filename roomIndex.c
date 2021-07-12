/* PROGRAM DESCRIPTION BEGIN */
/**
  ******************************************************************************
  * @file           : roomIndex.c
  * @brief          : Main body of the program
  * @project_type   : NA
  ******************************************************************************
  * @attention
  *
  *  Lecture:
  *   Illumination Techniques and Planning
  *
  *  Name:
  *  Helper Program
  *
  *  Designer:
  *  Hasan YİĞİT
  *
  *  Date: 02.04.2020
  *
  *  Other Parts Of The Program:
  *
  *
  *  CMakeList contents:
  *
  *  
  *
  *****************************************************************************
  *
  * Language:
  * Program:
  * Program edition :
  *
  ******************************************************************************
  *
  * DEFINATION OF PROJECT:
  *
  *****************************************************************************
  *Lighting design room index calculation
  *
  ******************************************************************************
  *
  * SAMPLE PROGRAM INPUT OUTPUT:
  *
  * *****************************************************************************
  *
  **
  **/
/* PROGRAM DESCRIPTION END */

/* Includes Begin -----------------------------------------------------------------------------*/
#include <stdio.h>
/* End of the includes--------------------------------------------------------------------------*/

/* Function Prototypes -----------------------------------------------*/
/* USER CODE BEGIN FP */

/* roomIndexCalculate calculate the room index value according to given room parameters */
float roomIndexCalculate(float length,float width,float x, float y);

/* USER CODE END FP */

/**
  * @brief  The application entry point.
  * @retval int
  */

/* Main Begins -----------------------------------------------------------------------------*/
int main(){

 float roomIndex;
 float length;
 float width;
 int cont;
 float armaturelength;
 float workingheinht;
 do{
 printf("Enter the lengt\n");
 scanf("%f",&length);
 printf("Enter the with\n");
 scanf("%f",&width);
 printf("Enter the armature length\n");
 scanf("%f",&armaturelength);
 printf("Enter the working height\n");
 scanf("%f",&workingheinht);
 roomIndex = roomIndexCalculate(length,width,armaturelength,workingheinht);
 printf("Room index : %.2f\n\n",roomIndex);
 printf("For Quit press any number , for contuniue press 1 ");
 scanf("%d",&cont);
 }while(cont==1);
    return 1;
 }

/* Main Ends -----------------------------------------------------------------------------*/
/**
  * @}  End of the Main Function
  */
  
  
/**
 * @}  Function Definitions
 **/
 
/* Function Definitions Begin ------------------------------------------------------------*/
/* USER CODE BEGIN FD */

/* roomIndexCalculate calculate the room index value according to given room parameters */
/**
  * Input Parameters: float length Room lengt in cm
                      float width  Room width in cm
					  float x armaturelength in cm
					  float y workingheinht in cm
					  
   * Output Parameters: roomindex: is result value in float type
   * NOTE: Room height is selected 2.7 meters as the default value. 
   If you have a different value you must change it.   
  
**/
float roomIndexCalculate(float length,float width,float x, float y){
float roomindex;
float l1;
float w1;
float x1;
float y1;
l1= length/100;
w1= width/100;
x1= x/100;
y1= y/100;
roomindex = ((w1*8)+(l1*2))/(10*(2.7-(x1+y1))); // height = 2.7
return roomindex;

}

/* Function Definitions End ------------------------------------------------------------*/
/* USER CODE END FD */

/**
  * @}  End of the file
  */
  