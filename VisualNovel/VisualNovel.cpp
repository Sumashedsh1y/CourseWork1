#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <windows.h>
#include "BackDoor.h"
#include "PlaySong.h"
#include "FonColor.h"
using namespace std;
using namespace sf;
void zatemnenie(RenderWindow& win)
{
    int t = 0;
    while (t < 255)
    {
        FonColor fon(50);
        win.draw(fon.getFon());
        win.display();
        Sleep(10);
        t++;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");

    RenderWindow window(VideoMode(1920, 1080), "Визуальная новелла", Style::Fullscreen);

    Clock clock;
    Time time;

    const Color colorArr[2] = { Color::Magenta, Color::Red };
    int i = 0;
    float swichtime = 0;

    Font font;
    font.loadFromFile("Font.ttf");

    int scene = 1;
    int music = 1;

    PlaySong q("Реквизиты\\Музыка\\SONG1.ogg");
    q.Play();
    PlaySong p("Реквизиты\\Музыка\\SONG2.ogg");

    while (window.isOpen())
    {
        if (scene == 1)
        {
            Text txt;
            txt.setFont(font);
            txt.setString(L"------------------------Курсовая работа-------------------------\n Объектно-ориентированный подход при разработке визуальной новеллы");
            txt.setCharacterSize(90);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);

            Text txt2;
            txt2.setFont(font);
            txt2.setString(L"Нажмите на ENTER для продолжения");
            txt2.setOutlineThickness(2.0f);
            txt2.setOutlineColor(Color::Cyan);
            txt2.setCharacterSize(100);
            txt2.setPosition(350, 250);

            BackDoor z("Реквизиты\\Фоны\\FON1.jpg");
            Event event;
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Enter)
                    {
                        zatemnenie(window);
                        scene++;
                        if (music == 1)
                        {
                            q.Stop();
                            p.Play();
                            music++;
                            continue;
                        }
                    }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            time = clock.getElapsedTime();
            if (time.asSeconds() > 0)
            {
                if (swichtime == 0)
                {
                    txt2.setFillColor(colorArr[i]);
                    i++;
                }
                swichtime = clock.getElapsedTime().asSeconds();
                if (swichtime > 1)
                {
                    clock.restart();
                    swichtime = 0;
                }
                if (i > 1)
                {
                    i = 0;
                }
            }
            window.draw(txt2);
            window.display();
        }
        if (scene == 2)
        {
            BackDoor z("Реквизиты\\Фоны\\FON2.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Зимняя ночь. В одном из домов спального района тускло горит одно окно. Старик задумчиво всматривается в медленно падающие снежинки. Как правило,\nабсолютно у всего в этом мире существует начало и конец. Порой люди не осознают насколько коротка жизнь.В потоке нет времени задумываться на такие\nмелочи как конечность бытия. \"Хотя молодость наверное предназначена для ветреноголегкомыслия\" - улыбнулся старик.");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Enter)
                    {
                        zatemnenie(window);
                        scene++;
                        continue;
                    }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
        if (scene == 3)
        {
            BackDoor z("Реквизиты\\Фоны\\FON2.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Он уже не может сам ходить и даже встать с кровати, с помощью других усаживается на инвалидное кресло и время от времени подкатывает к окошку. Часы\nнеумолимо тикают приближая финал жизни старика.Погрузившись в свои мысли, он решает вспомнить все важные моменты жизни, старается переосмыслить их...");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Enter)
                    {
                        zatemnenie(window);
                        scene++;
                        continue;
                    }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
        if (scene == 4)
        {
            BackDoor z("Реквизиты\\Фоны\\FON3.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Первая яркая вспышка - он ещё юноша... Куча идей в голове, много перспектив и амбиций. Есть уже определенные мысли на будущее, ему близки\nтехнические предметы, в особенности химия, близкие советуют поступать на химика - технолога в топовый университет.");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 800);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Enter)
                    {
                        zatemnenie(window);
                        scene++;
                        continue;
                    }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
        if (scene == 5)
        {
            BackDoor z("Реквизиты\\Фоны\\FON3.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Все бы шло к логическому развитию событий, но у него, несмотря на большую любовь к химии, были в жизни и другие увлечения. На прогулках с\nдрузьями он очень любил фотографировать все вокруг: от красивых пейзажей до обычных видов города. Иногда он мечтал, что будет делать снимки, которые\nстанут произведениями искусства. Время шло, а уже превратившееся из хобби в настоящюю любовь занятие, никуда не уходило из головы героя.");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 800);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Enter)
                    {
                        zatemnenie(window);
                        scene++;
                        continue;
                    }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
        if (scene == 6)
        {
            BackDoor z("Реквизиты\\Фоны\\FON3.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Пришло время выпускных экзаменов в школе. Времени совсем нехватало, и в конце концов фотоаппарат пришлось отложить в долгий ящик. Как\nи предпологалось все прошло гладко, экзамены были успешно сданы и герой успешно поступает в один из лучших вузов страны. Снова начинается учеба, уже куда\nсложнее чем в школе, снова не хватает времени, и снова не получается вернутся к своему любимому фотоаппарату. Вскоре начинаются практики где молодой\nчеловек видит свою будущую работу и в его голову начинают закрадыватся сомнения...");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 800);
            Text txt2;
            txt2.setFont(font);
            txt2.setString(L"ENTER - Оставить все как есть и учится дальше\nSPACE - Рискнуть и попробовать все изменить");
            txt2.setCharacterSize(100);
            txt2.setOutlineThickness(4.0f);
            txt2.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                    if (event.type == Event::KeyPressed)
                    {
                        if (event.key.code == Keyboard::Enter)
                        {
                            zatemnenie(window);
                            scene++;
                            continue;
                        }
                        if (event.key.code == Keyboard::Space)
                        {
                            zatemnenie(window);
                            scene = 9;
                            continue;
                        }
                    }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.draw(txt2);
            window.display();
        }
        if (scene == 7)
        {
            BackDoor z("Реквизиты\\Фоны\\FON4.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Сдача диплома, поиск работы, первые серьезные отношения. Начиналась взрослая жизнь со своими радостями и невзгодами. Работа в лаборатории\nкрупного предприятия, свадьба, семейная жизнь, дети. И вот уже главный герой полностью состоявшийся человек. Все как у людей.");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 900);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                {
                    if (event.key.code == Keyboard::Enter)
                    {
                        zatemnenie(window);
                        scene++;
                        continue;
                    }
                }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
        if (scene == 8)
        {
            BackDoor z("Реквизиты\\Фоны\\FON4.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Время идет, дети подрастают. Подходя к четвертому десятку у нашего героя возникают серьезные проблемы на работе, где он не может полностью\nреализовать свои идеи. Есть проблемы и в семье. Он начинает снова искать свой путь, метаться. Но можно ли уже что то изменить, или точка невозврата\nуже пройдена?");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 900);
            Text txt2;
            txt2.setFont(font);
            txt2.setString(L"ENTER - Оставить все как есть\nSPACE - Рискнуть и попробовать все изменить");
            txt2.setCharacterSize(100);
            txt2.setOutlineThickness(4.0f);
            txt2.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                {
                    if (event.type == Event::KeyPressed)
                    {
                        if (event.key.code == Keyboard::Enter)
                        {
                            zatemnenie(window);
                            scene = 15;
                            continue;
                        }
                        if (event.key.code == Keyboard::Space)
                        {
                            zatemnenie(window);
                            scene = 25;
                            continue;
                        }
                    }
                }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.draw(txt2);
            window.display();
        }
        if (scene == 9)
        {
            BackDoor z("Реквизиты\\Фоны\\FON5.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"Неожиданное решение удивило друзей и близких. Главный герой поставил всех перед фактом - забрав документы из престижного вуза и поступив\nна факультет художественной фотографии. Прошло время яркой, интересной и плодотворной учебы в вузе, наступила пора определения в жизни. ");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                {
                    if (event.key.code == Keyboard::Enter)
                    {
                        zatemnenie(window);
                        scene++;
                        continue;
                    }
                }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
        if (scene == 10)
        {
            BackDoor z("Реквизиты\\Фоны\\FON5.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"И вместо карьеры фотохудожника он начал трудиться фоторепортером на небольшом телеканале. Время шло, а работа не приносила ни морального, ни\nматериального удовлетворения.Он менял телеканалы, рекламные агенства, но это не давало желаемого успеха. Не все складывалось и в семейной жизни.\nПодходя к четвертому десятку человек глубоко разочаровывается в жизни, анализирует и ищет пути выхода из ситуации. Но можно ли уже что то изменить или\nточка невозврата уже пройдена?");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);
            Text txt2;
            txt2.setFont(font);
            txt2.setString(L"ENTER - Оставить все как есть\nSPACE - Рискнуть и попробовать все изменить");
            txt2.setCharacterSize(100);
            txt2.setOutlineThickness(4.0f);
            txt2.setPosition(10, 600);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                {
                    if (event.type == Event::KeyPressed)
                    {
                        if (event.key.code == Keyboard::Enter)
                        {
                            zatemnenie(window);
                            scene = 20;
                            continue;
                        }
                        if (event.key.code == Keyboard::Space)
                        {
                            zatemnenie(window);
                            scene = 25;
                            continue;
                        }
                    }
                }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.draw(txt2);
            window.display();
        }
        if (scene == 15)
        {
            BackDoor z("Реквизиты\\Фоны\\FON6.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"ХОРОШАЯ КОНЦОВКА\nКризис среднего возраста был непродолжителен. Появилась новая интересная работа в современной научной лаборатории. Все стабилизировалось и\nв семье. А фотографирование осталось его хобби.");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                {

                }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
        if (scene == 20)
        {
            BackDoor z("Реквизиты\\Фоны\\FON6.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"ХОРОШАЯ КОНЦОВКА\nКогда герой уже почти решился на перемены в жизни - помог случай: фото и видео которые он иногда снимал в свободное время и выкладывал в\nсеть заметил известный организатор выставок, ему понравились работы главного героя. И вот уже его фотографии появляются в известных\nартстудиях и галереях. В личной жизни он нашел вторую половину, которую он искал всю жизнь.");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                {

                }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
       
        if (scene == 25)
        {
            BackDoor z("Реквизиты\\Фоны\\FON6.jpg");
            Event event;
            Text txt;
            txt.setFont(font);
            txt.setString(L"ПЛОХАЯ КОНЦОВКА\nМетания между двух огней никогда не доводили до добра. Данный случай не исключение - особого успеха герой не добился ни в работе\nинженера-технолога, ни в фотосъемке. В жизни все нужно делать своевременно, не упускать момент, старательно добиваться своей цели и правильно расставлять\nприоритеты. Иногда он все еще задумывался а что если бы... Но история не имеет сослогательного наклонения.");
            txt.setCharacterSize(40);
            txt.setOutlineThickness(4.0f);
            txt.setPosition(10, 10);
            while (window.pollEvent(event))
            {
                if (event.type == Event::KeyPressed)
                    if (event.key.code == Keyboard::Escape)
                        window.close();
                if (event.type == Event::KeyPressed)
                {

                }
            }
            window.clear();
            window.draw(z.SetBack());
            window.draw(txt);
            window.display();
        }
    }
    return 0;
}