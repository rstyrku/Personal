package log_parser;

import java.io.BufferedReader;
import java.io.IOException;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/**
 * @author Group Z
 */
public class Parser {

    // used for mapping building abbreviations to their actual names
    private static final Map<String, String> BUILDING_NAMES;
    static {
        Map<String, String> tmpMap = new HashMap<>();
        /*
         * ToDo: map out all shortened building names (i.e. Atki, RUP, Foun)
         * to their actual names, this requires some investigation
         *
         * note that in the logs AP's will have names like 'Duke201-AP335-1',
         * we should only be interested in the beginning alphabetical chars
         */
        tmpMap.put("Atki", "Atkins");
        tmpMap.put("Colv", "Colvard");
        tmpMap.put("Duke", "Duke Centennial Hall");
        tmpMap.put("Foun", "Foundation Annex");
        tmpMap.put("RUP", "Regional Utility Plant");

        // ... and so on

        BUILDING_NAMES = Collections.unmodifiableMap(tmpMap);
    }

    // time stamp regex, i.e. '23:59:58.452897'
    private static final String TSTR_REGEX = "[0-2][0-9]:[0-5][0-9]:[0-5]"
            + "[0-9]\\.\\d{6}";

    private static final String MAC_REGEX = "([a-f0-9]{2}:){5}[a-f0-9]{2}";

    private static final String IPV4_REGEX = "(25[0-5]|2[0-4]\\d|[0-1]?\\d?"
            + "\\d)(\\.(25[0-5]|2[0-4]\\d|[0-1]?\\d?\\d)){3}";

    private static final String NAME_REGEX = ".*";

    // Association Success - NOTI code 501100
    // ToDo: need to add capture groups to the following association success
    // regex, so we can grab the pertinent info using a matcher
    private static final String ASSOC_SUCC_MSG_REGEX = "Assoc success @ "
            + TSTR_REGEX + ": " + MAC_REGEX + ": AP " + IPV4_REGEX + "-"
            + MAC_REGEX + "-" + NAME_REGEX + "$";

    // ToDo: add regular expressions for NOTI codes 501080, 501105 and possibly
    // 501080 (probably more)

    // ToDo: create regular expression for the beginning of log entries, before
    // the 'message' portion

    // program usage
    final static String USAGE = "Usage: java -jar parser [OPTION]... [FILE]..."
            + "\n";

    /**
     * Entry point of the program.
     *
     * @param args
     *             - command line arguments, either a file or standard input
     */
    public static void main(String[] args) {
        // ToDo check argument count and args
        // -f <filename> should be log file to read from
        // <nothing> or '-' should mean read from stdin i.e.
        InputStream(System.stdin)

        // once args are sorted create a BufferReader and pass to parse function
    }

    /**
     *
     * @param in
     */
    private static void parse(BufferedReader in) {
        String line;

        try {
            while ((line = in.readLine()) != null) {
                // read input stream or file line by line
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

}