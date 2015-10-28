void get_buttons(){
	button = ((btn4 << 3) | (btn3 << 2) | (btn2 << 1) | (btn1 << 0));
	if (button == old_button){
		btn_held++;
		if(millis() <= (btn_count + button_repeat_speed)) {return;}	
	}
	//else {btn_held = 0;}
	
	switch (button){
		case 1:
			btn_right = true;
			button_repeat_speed = 500;
			break;
		case 2:
			btn_left = true;
			button_repeat_speed = 500;
 			break;
		case 4:
			btn_plus=true;
			if(btn_held > 400) button_repeat_speed = 50;
			break;
		case 8:
			btn_minus=true;
			if(btn_held > 400) button_repeat_speed = 50;
			break;
		default:
			btn_held =0;
			button_repeat_speed = 500;
			break;
	}	
	old_button = button;
	btn_count = millis();
	
}
