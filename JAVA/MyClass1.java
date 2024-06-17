import java.util.Properties;
import java.io.FileInputStream;
import java.io.IOException;

public class MyClass1 {
    public static void loadProperty(Properties props, final String propertyContent) throws Exception, IOException 
    {
        System.out.println("getProperties After Ktpplus");
        FileInputStream subIniFile = null;
        try 
        {
            System.out.println(propertyContent);
            final String fileName = props.getProperty(propertyContent);
            subIniFile = new FileInputStream(fileName);
            props.load(subIniFile);
        } 
        catch (final Exception e2) 
        {
            throw e2;
        } 
        finally 
        {
            if (subIniFile != null) 
            {
                subIniFile.close();
            }
        }
        //return props;
    }

    public static Properties getProperties(final String propertyFilePath) throws Exception, IOException 
    {
        FileInputStream propertyFile = null;
        Properties props = new Properties();

        System.out.println("Path = " + propertyFilePath);

        // Load provided property file
        try { 
            // Properties file is a INI File
            System.out.println(propertyFilePath);
            propertyFile = new FileInputStream(propertyFilePath);
            props.load(propertyFile);
        } 
        catch (final Exception e1) 
        {
            System.out.println("getProperties exeption");
            throw e1;
        } 
        finally 
        {
            if (propertyFile != null) 
            {
                propertyFile.close();
            }
        }

        if (!props.getProperty("Ktpplus", "").equals("")) {
            //props = 
            loadProperty(props, "Ktpplus");

            if (!props.getProperty("Nextyaml", "").equals("")) {
                //props = 
                loadProperty(props, "Nextyaml");
            }
        }

        System.out.println("Props output " + props.toString());
        return props;
    }

    public static int getInitParams(final String[] args) 
    {
        if (args.length <= 0) {
            return -1;
        }

        int i = 0;

        while (i < args.length) {
            if ("-h".equals(args[i])) {
                if (i + 1 == args.length) {
                return -1;
                }
            }
            ++i;
        }
        return i - 1;
    }

    public static void main(String args[]) {
        Properties props = null;
        System.out.println("Length of args = " + args.length);
        int propertyFileIndex = getInitParams(args);
        System.out.println ("getInitParams method = " +propertyFileIndex);

        if (propertyFileIndex == -1) {
            System.out.println("Main invalid property File Index");
        }
        
        try {
            props = getProperties(args[propertyFileIndex]);
        }
        
        catch (final Exception e) {
            System.out.println("Exception is : " + e.getMessage());
        }
    }
}