import java.util.Properties;
import java.io.FileInputStream;
import java.io.IOException;

public class MyClass {
  public static Properties getProperties(final String []propertyFilePath) throws Exception, IOException 
  {
    FileInputStream propertyFile = null;
    Properties props = new Properties();

    final String []listFilePaths = {"SUBINI", "Ktpplus"};
    System.out.println("propertyFilePath.length = " + propertyFilePath.length);
    int j = 0;
    for (int i = 1; i < propertyFilePath.length; ++i) {
      System.out.println("Path = " + propertyFilePath[i]);

      // Load provided property file
      try { 
          // Properties file is a INI File
          System.out.println(propertyFilePath[i]);
          propertyFile = new FileInputStream(propertyFilePath[i]);
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

      System.out.println("Test getProperty, listFilePaths[j] = " + listFilePaths[j] + j);
      if (!props.getProperty(listFilePaths[j++], "").equals("")) 
      {
          System.out.println("getProperties After SUBINI");
        FileInputStream subIniFile = null;
        try 
        {
            System.out.println("SUBINI");
          final String fileName = props.getProperty("SUBINI");
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
      }
      ++i;    
    }

    System.out.println("Props output " + props.toString());
    return props;
  }
  
  public static int getInitParams(final String[] args) 
  {
    if (args.length <= 0) 
    {
      //printUsage();
      return -1;
    }

    int i = 0;

    while (i < args.length) 
    {
      if ("-h".equals(args[i])) 
      {
        //printUsage();
        if (i + 1 == args.length) 
        {
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
        if (propertyFileIndex == -1) 
        {
          System.out.println("Main invalid property File Index");
        }
        try {
            //props = getProperties(args[propertyFileIndex]);
            props = getProperties(args);
        }
        catch (final Exception e) {
          System.out.println("Exception is : " + e.getMessage());
        }
    }
}