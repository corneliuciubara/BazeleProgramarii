import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class AgeComparison {
    public static void main(String args[]) throws ParseException {
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
        String name1 = "Arthur Morgan";
        Date birthdate1 = sdf.parse("1990-05-15");
        String name2 = "John Marston";
        Date birthdate2 = sdf.parse("1985-08-20");
        int comparison = birthdate1.compareTo(birthdate2);
        
        if (comparison < 0) {
            System.out.println(name1 + " is older than " + name2);
        } else if (comparison > 0) {
            System.out.println(name2 + " is older than " + name1);
        } else {
            System.out.println(name1 + " and " + name2 + " have the same age ");
        }
    }
}