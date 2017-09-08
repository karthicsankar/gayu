import java.io.*;
class vowels
{
	public static void main(String args[]) throws IOException
	{
		String str;
		int vow = 0, digit = 0, blank = 0;
		char ch;

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter a String : ");
		str = br.readLine();

		for(int a = 0; a < str.length(); a++)
		{
			ch = str.charAt(i);

			if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || 
			ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
				vowels ++;
			else if(Char.isDigit(ch))
				digits ++;
			else if(Char.isWhitespace(ch))
				blanks ++;
		}

		System.out.println("Vow: " + vow);
		System.out.println("Digit : " + digit);
		System.out.println("Blank : " + blank);
	}
}
