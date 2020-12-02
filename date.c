void inputdate(Date *d)
{
	printf("\nNhap ngay, thang, nam:");
	scanf("%d%d%d",d->day,d->month,d->year);	
}
void outputdate(Date d)
{
	printf("%d/%d/%d",d.day,d.month,d.year);
}
