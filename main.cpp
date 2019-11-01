int main()
{
	
	list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	cout<<"\n\n\t  DISPLAYING ALL NODES  \t\n\n";
	obj.display();
	cout<<"\n\n\t  INSERTING AT END  \t\n\n";
	obj.createnode(55);
	obj.display();
	cout<<"\n\n\t  INSERTING AT START  \t\n\n";
	obj.insert_start(50);
	obj.display();
	cout<<"\n\n\t  INSERTING AT PARTICULAR POSITION  \t\n\n";
	obj.insert_position(5,60);
	obj.display();
	cout<<"\n\n\t  DELETING AT START  \t\n\n";
	obj.delete_first();
	obj.display();
	cout<<"\n\n\t  DELETING AT PARTICULAR \t\n\n";
	obj.delete_position(40);
	obj.display();
	cout<<"\n\n\t  DELETING AT END  \t\n\n";
	obj.delete_last();
	obj.display();

	system("pause");
	return 0;

}
