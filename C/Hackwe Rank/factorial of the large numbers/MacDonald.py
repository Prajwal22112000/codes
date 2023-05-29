admin='admin123'
admin_pass='adminpass'
customer='123'
customer_pass='admin'
pizza_stock={'pizza':25,'burger':200,'fries':300}
while(True):
    pizza_app=int(input(' admin(1) \ncustomer(2) \nhome_page(3)'))
    if pizza_app==1:
        print('u have entered admin login page')
        id=input('id')
        password=input('password')
        if id==admin and password==admin_pass:
            print('sucessfull login')
            menu=int(input('stock(1) \nview_stock(2) \nlogout(3) '))
            if menu==1:
                while(True):
                    print('stock management')
                    values=int(input('add stock(1)\nremove stock(2)\nlogout(3)'))
                    if values==1:
                        print(pizza_stock)
                        add=input('add stock')
                        how=int(input('how much u want to add'))
                        pizza_stock[add]+=how
                        print(pizza_stock)
                    elif values==2:
                        print('remove stock')
                        subtract=input('what stock u want to delete')
                        how=int(input('how much u want to delete'))
                        pizza_stock[subtract]-=how
                        print(pizza_stock)
                    elif values==3:
                        print('logout')
                        break
                    else:
                        print('choose correct option')
            elif menu==2:
                print('view stock')
                print(pizza_stock)
            elif menu==3:
                print('logout')
                break
            else:
                print('wrong option')
        else:
            print('wrong credentials')
    elif pizza_app==2:
        print('u have entered user login page')
        id=input('id')
        password=input('password')
        if id==customer and password==customer_pass:
            print('sucessfull login')
            menu=int(input('press\norder(1) \nmenu(2) \nlogout(3) '))
            if menu==1:
                    choose=input('choose what u want to order')
                    how=int(input('how much u want to order'))                   
                    print('YAA! /n ordered , THANKS')
                    pizza_stock[choose]-=how
            elif menu==2:
                print('menu')
                print(pizza_stock)
            elif menu==3:
                print('logout')
                break
            else:
                print('choose correct option')
        else:
            print('enter correct credentials')
    elif pizza_app==3:
        print('logout')
        break
    else:
        print('1 for admin login page \n 2 for user login page')