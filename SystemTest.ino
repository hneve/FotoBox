void SystemTest(){
	lcd.print("System testing:");
	lcd.setCursor(0,1);
	lcd.print("1f 2s 3-1 4-2");
        bool hold = 1;
	while(hold){
		get_buttons();
		switch (button){
			case 1: shutter;break;
			case 2: focus;break;
			case 4: flash;break;
			case 8: external;break;
                        case 15: hold = 0;break;
		}
	}
}
