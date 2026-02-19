/*
 * File:   main.c
 * Author: emertxe
 *
 * Created on 14 February, 2024, 5:40 PM
 */

#include<xc.h>
#include "black_box.h"

State_t state;

void init_config()
{
     init_clcd();
    state = e_dashboard;
}

void main(void) 
{
    init_config();

    while(1)
    {
        // Detect key press
   
     // clcd_putch('H', LINE1(0)); 
        clcd_print("HELLO          ", LINE1(0)); 
  

//        switch (state)
//        {
//            case e_dashboard:
//                // Display dashboard
//                view_dashboard();
//                break;
//            
//            case e_main_menu:
//                // Display dashboard
//                display_main_menu();
//                break;
//            
//            case e_view_log:
//                // Display dashboard
//                view_log();
//                break;
//                 
//            case e_download_log:
//                download_log();
//                break;
//                
//            case e_clear_log:
//                clear_log();
//                break;
//                
//                      
//            case e_set_time:
//                set_time();
//                break;
//                
//        }
        
    }
    
}


