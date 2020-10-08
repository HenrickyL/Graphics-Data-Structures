#g++ main.cpp -o exe -lsfml-graphics -lsfml-window -lsfml-system && ./exe

g++ -c Model/Graphic.cpp -o exec/graphic 
echo graphic
g++ -c Model/Text.cpp -o exec/Text
echo Text
g++ -c Model/Rect.cpp -o exec/Rect
echo Rect
g++ -c Model/GList.cpp -o exec/GList
cd exec
g++ main.cpp GList graphic Rect Text -o exe -lsfml-graphics -lsfml-window -lsfml-system
echo MAIN
