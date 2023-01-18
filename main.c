#include "lib/include.h"

int main(void)
{
	 I2C3_Init();
	 OLED_Init();
	 OLED_Clear();
   Configurar_PLL(_20MHZ);
   Configurar_GPIO();
    
    // variables for counting
    int count = 0;
    //float dec = 0.0;

        while ( 1 ) {
            
            /////////////////////
            // Strings
            ///////////////////
        
    
             /////////////////////
            // Strings
            ///////////////////
            
             OLED_YX(0, 0);
             //OLED_Write_String( "OLED SSD1306" );
             OLED_Write_String( "CAROLINA R" );
                             Delay_ms(1000);

             OLED_YX(1, 0);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("JESUS AVILA");
                         Delay_ms(1000);

             OLED_YX(2, 0);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("MICRO");
                         Delay_ms(1000);

             OLED_YX(3, 0);
             //OLED_Write_String ("TM4C123");
             OLED_Write_String ("GRUPO 41");
                         Delay_ms(1000);

            /////////////////////
            // Integer Count
            ////////////////////
            
            
                        
            //OLED_Clear();
            
            Delay_ms(100);
            
          
   }
}