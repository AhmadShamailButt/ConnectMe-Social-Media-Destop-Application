//#include<iostream>
//#include <SFML/Graphics.hpp>
//#include"textbox.h"
//#include<fstream>
//using namespace std;
//using namespace sf;
//int scene = 3, i = 1;
//scn2 scene2;
//scn3 scene3;
//bool first = true;
//bool check(string a, string b)
//{
//	ifstream fin("PlayerloginEmail.txt");
//	ifstream fn("PlayerloginPassword.txt");
//
//
//	string email, password;
//
//	while (getline(fin, email) && getline(fn, password)) {
//		if (email.length() != a.length() || password.length() != b.length()) {
//			continue;
//		}
//
//		bool match = true;
//		for (int i = 0; i < email.length(); i++) {
//			if (email[i] != a[i]) {
//				match = false;
//				break;
//			}
//		}
//
//		if (match) {
//			for (int i = 0; i < password.length(); i++) {
//				if (password[i] != b[i]) {
//					match = false;
//					break;
//				}
//			}
//		}
//
//		if (match) {
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//    RenderWindow window(VideoMode(1000, 980), "ConnectMe");
//
//    // Create sprite and set its texture
//
//    
//    float scaleFactor = 0.4f; // 50% of window size
//   // sprite.setScale(scaleFactor * window.getSize().x / texture.getSize().x,scaleFactor * window.getSize().y / texture.getSize().y);
//   //  Set sprite's position 
//   // sprite.setPosition(300,200);
//	Texture t1, t2, t3, t4, t5, t6, t7, t8, t9;
//
//	//t1.loadFromFile("Login.png");
//	t2.loadFromFile("Select.png");
//	t3.loadFromFile("login2.png");
//	//t4.loadFromFile("Password.png");
//	//t5.loadFromFile("Submit.png");
//	//t6.loadFromFile("Back.png");
//	//t7.loadFromFile("ConfirmEmail.png");
//	//t8.loadFromFile("ConfirmPassword.png");
//	//t9.loadFromFile("LoginOk.png");
//	if (t2.loadFromFile("Select.png"))
//		cout << "Unable to open";
//
//
//	Sprite login(t3);
//	Sprite registerr(t1);
//	Sprite select(t2);
//	Sprite Password(t4);
//	Sprite Submit(t5);
//	Sprite Back(t6);
//	Sprite ConfirmEmail(t7);
//	Sprite ConfirmPassword(t8);
//	Sprite LoginOK(t9);
//
//	float scaleX = static_cast<float>(window.getSize().x) / t3.getSize().x;
//	float scaleY = static_cast<float>(window.getSize().y) / t3.getSize().y;
//	login.setScale(scaleX, scaleY);
//
//	scaleX = static_cast<float>(window.getSize().x) / t2.getSize().x;
//     scaleY = static_cast<float>(window.getSize().y) / t2.getSize().y;
//	select.setScale(scaleX, scaleY);
//	
//
//
//	Font arial;
//	arial.loadFromFile("Arial.ttf");
//
//	Textbox textLoginEmail(30, Color::Black, false);
//	textLoginEmail.setFont(arial);
//	Textbox textLoginPassword(30, Color::Black, false);
//	textLoginPassword.setFont(arial);
//	Textbox textRegisterEmail(30, Color::White, false);
//	textRegisterEmail.setFont(arial);
//	Textbox textRegisterUsername(30, Color::White, false);
//	textRegisterUsername.setFont(arial);
//	Textbox textRegisterPassword(30, Color::White, false);
//	textRegisterPassword.setFont(arial);
//	Textbox textRegisterConfirmPassword(30, Color::White, false);
//	textRegisterConfirmPassword.setFont(arial);
//
//	while (window.isOpen())
//	{
//		
//		Event e;
//		while (window.pollEvent(e))
//		{
//			if (e.type == Event::Closed)
//			{
//				window.close();
//			}
//			if (e.type == Event::MouseButtonPressed)
//			{
//				if (e.key.code == Mouse::Left)
//				{
//					int x = Mouse::getPosition(window).x;
//					int y = Mouse::getPosition(window).y;
//					if (scene == 1)
//					{
//						if (x >= 380 && x <= 630 && y >= 520 && y <= 615)
//						{
//							// LOGIN
//							scene = 2;
//						}
//						if (x >= 380 && x <= 630 && y >= 660 && y <= 755)
//						{
//							// SignUp
//							scene = 3;
//						}
//					}
//					 else if (scene == 2)
//					{
//						// back
//						if (x >= 43 && x <= 128 && y >= 50 && y <= 90)
//						{
//							scene = 1;
//						}
//						if (x >= 250 && x <= 750 && y >= 520 && y <= 550)
//						{
//							cout << 1;
//							// click on email
//							scene2.email = true;
//							textLoginEmail.setSelected(true);
//						}
//						if (x >= 250 && x <= 750 && y >= 670 && y <= 700)
//						{
//							//click on password
//							scene2.password = true;
//							textLoginPassword.setSelected(true);
//						}
//						// submit
//						if (x >= 250 && x <= 750 && y >= 740 && y <= 770)
//						{
//							cout << 1;
//							bool valid = false;
//							string e, p;
//							e = textLoginEmail.getText();
//							p = textLoginPassword.getText();
//							if (e.empty() == false && p.empty() == false)
//							{
//								for (int j = 1; j <= i; j++)
//								{
//									if (check(e, p))
//									{
//										valid = true;
//										break;
//									}
//								}
//							}
//							if (valid)
//							{
//								scene = 4;
//							}
//							else
//							{
//								scene = 6;
//							}
//						}
//
//					}
//
//					 else  if (scene == 3)
//					{
//						// back
//						if (x >= 233 && x <= 368 && y >= 530 && y <= 580)
//						{
//							scene = 1;
//						}
//						// email
//						if (x >= 15 && x <= 165 && y >= 34 && y <= 84)
//						{
//							scene3.email = true;
//							textRegisterEmail.setSelected(true);
//						}
//						// confirm email
//						if (x >= 15 && x <= 293 && y >= 116 && y <= 166)
//						{
//							scene3.confirmEmail = true;
//							textRegisterUsername.setSelected(true);
//							cout << 1;
//						}
//						// password
//						if (x >= 15 && x <= 224 && y >= 198 && y <= 248)
//						{
//							scene3.password = true;
//							textRegisterPassword.setSelected(true);
//							cout << 1;
//						}
//						// confirm password
//						if (x >= 15 && x <= 329 && y >= 280 && y <= 330)
//						{
//							cout << 1;
//							scene3.confirmPassword = true;
//							textRegisterConfirmPassword.setSelected(true);
//						}
//						//submit
//						if (x >= 143 && x <= 457 && y >= 405 && y <= 480)
//						{
//							std::string e, ce, p, cp;
//							e = textRegisterEmail.getText();
//							ce = textRegisterUsername.getText();
//							p = textRegisterPassword.getText();
//							cp = textRegisterConfirmPassword.getText();
//							if (e.empty() == false && ce.empty() == false && p.empty() == false && cp.empty() == false)
//							{
//								if (e == ce && p == cp)
//								{
//									ofstream fout("PlayerloginEmail.txt", ios::app);
//									fout << endl << e;
//									fout.close();
//									ofstream fw("PlayerloginPassword.txt", ios::app);
//									fw << endl << p;
//									fw.close();
//
//								}
//							}
//						}
//					}
//				}
//				
//				if (e.type == Event::TextEntered)
//				{
//				
//					if (scene == 2)
//					{
//					
//						if (scene2.email == true)
//						{
//							if (Keyboard::isKeyPressed(Keyboard::Return))
//							{
//								cout << 1;
//								textLoginEmail.setSelected(false);
//								scene2.email = false;
//							}
//							else
//							{
//								textLoginEmail.typedOn(e);
//							}
//						}
//						else if (scene2.password == true)
//						{
//							if (Keyboard::isKeyPressed(Keyboard::Return))
//							{
//								textLoginPassword.setSelected(false);
//								scene2.password = false;
//							}
//							else
//							{
//								textLoginPassword.typedOn(e);
//							}
//						}
//					}
//					 if (scene == 3)
//					{
//						if (scene3.email == true)
//						{
//							if (Keyboard::isKeyPressed(Keyboard::Return))
//							{
//						
//								textRegisterEmail.setSelected(false);
//								scene3.email = false;
//							}
//							else
//							{
//								textRegisterEmail.typedOn(e);
//							}
//						}
//						else if (scene3.confirmEmail == true)
//						{
//							if (Keyboard::isKeyPressed(Keyboard::Return))
//							{
//								textRegisterUsername.setSelected(false);
//								scene3.confirmEmail = false;
//							}
//							else
//							{
//								textRegisterUsername.typedOn(e);
//							}
//						}
//						else if (scene3.password == true)
//						{
//							if (Keyboard::isKeyPressed(Keyboard::Return))
//							{
//								textRegisterPassword.setSelected(false);
//								scene3.password = false;
//							}
//							else
//							{
//								textRegisterPassword.typedOn(e);
//							}
//						}
//						else if (scene3.confirmPassword == true)
//						{
//							if (Keyboard::isKeyPressed(Keyboard::Return))
//							{
//								textRegisterConfirmPassword.setSelected(false);
//								scene3.confirmPassword = false;
//							}
//							else
//							{
//								textRegisterConfirmPassword.typedOn(e);
//							}
//						}
//					}
//				}
//			}
//		window.clear(Color(104, 167, 92));
//		if (scene == 1)
//		{
//			window.draw(select);
//		}
//		else if (scene == 2)
//		{
//			window.draw(login);
//			textLoginEmail.setPosition({ 250,520 });
//			textLoginEmail.drawTo(window);
//			textLoginPassword.setPosition({ 269,237 });
//			textLoginPassword.drawTo(window);
//		}
//		else if (scene == 3)
//		{
//	/*		Submit.setPosition(143, 405);
//			window.draw(Submit);
//			Back.setPosition(233, 530);
//			window.draw(Back);
//			Email.setPosition(15, 34);
//			window.draw(Email);
//			ConfirmEmail.setPosition(15, 116);
//			window.draw(ConfirmEmail);
//			Password.setPosition(15, 198);
//			window.draw(Password);
//			ConfirmPassword.setPosition(15, 280);
//			window.draw(ConfirmPassword);
//	*/		textRegisterEmail.setPosition({ 175, 35 });
//			textRegisterEmail.drawTo(window);
//			textRegisterUsername.setPosition({ 303,117 });
//			textRegisterUsername.drawTo(window);
//			textRegisterPassword.setPosition({ 234,199 });
//			textRegisterPassword.drawTo(window);
//			textRegisterConfirmPassword.setPosition({ 339,281 });
//			textRegisterConfirmPassword.drawTo(window);
//		}
//		else if (scene == 4)
//		{
//			LoginOK.setPosition(193, 219);
//			window.draw(LoginOK);
//		}
//	
//		window.display();
//	}
//}
//
//	return 0;
