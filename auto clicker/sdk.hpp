void subx123()
{
    bool toggleActive = false;
    int clickCount = 0; 

    std::cout << "Press ins." << std::endl;

    while (true)
    {
        if (GetAsyncKeyState(VK_INSERT) & 0x8001)
        {
            if (!toggleActive)
            {
                toggleActive = true;
                std::cout << "On." << std::endl;
            }
            else
            {
                toggleActive = false;
                std::cout << "Off." << std::endl;
            }

            Sleep(200);
        }

        if (toggleActive)
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);   
            Sleep(0.1);                                       // Hold Butom
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);     
            clickCount++;                                    
            std::cout << "\033[1;32mSucces\033[0m" << " -> " << clickCount << std::endl;

            if (clickCount >= 10000000)
            {
                std::cout << "Exit." << std::endl;
                break;
            }

            //Sleep(0);
        }
        //Sleep(0);
    }
}

void login()
{
    std::cout << "7exodus" << std::endl;
    system("color 1");
    system("timeout /t 3");
    system("cls");
    subx123();
}