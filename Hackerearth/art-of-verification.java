import java.io.BufferedReader;
import java.io.InputStreamReader;

import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();
        String[] splited = name.split("\\?");
        Pattern pattern = Pattern.compile("(username=)(.*)(&pwd=)(.*)(&profile=)(.*)(&role=)(.*)(&key=)(.*)");
        Matcher matcher = pattern.matcher(splited[1]);
        while (matcher.find()) {
            System.out.print("username: ");
            System.out.println(matcher.group(2));
            System.out.print("pwd: ");
            System.out.println(matcher.group(4));
            System.out.print("profile: ");
            System.out.println(matcher.group(6));
            System.out.print("role: ");
            System.out.println(matcher.group(8));
            System.out.print("key: ");
            System.out.println(matcher.group(10));
        }
    }
}
