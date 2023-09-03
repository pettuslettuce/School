/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * May 4 2023
 * May the 4th be with you
 * Module 10 Lab 2
 * Encryption Interface
 */

// abstract interface to be implemented by the driver
public abstract interface EncryptionInterface {

    /**
     * This interface encrypts a given string using XOR (exclusive or) encryption with a user provided key.
     * (Thanks Dr. Roark!)
     * 
     * @param data The string to be encrypted
     * @param key The integer key to be used for encryption
     * @return The encrypted string
     * 
     *  ASCII code for the letter "H" is 72. 
     *  In binary that is:
     * 
     *  01001000
     * 
     *  We will apply the encryption process with a key of 10.
     *  We will XOR each bit of the binary representation of "H" against the binary representation of the key.
     * 
     *  If 0 is compared against 0, this evaluates to 0. 
     *  If 1 is compared against 1, this evaluates to 0. 
     *  If 0 is compared against 1, this evaluates to 1. 
     *  
     *  By doing this we make it difficult for an attacker to determine the original message without knowing the secret key.
     * 
     *  Our key is 10, which in binary is:
     * 
     *  1010
     * 
     *  This gives us:
     * 
     *  01001000 (H; original)
     *  00001010 (key)
     *  ------XOR compare key against each bit------------
     *  01000010 (encrypted H; is actually now B)
     * 
     *  To decrypt this, we simply XOR each bit of the encrypted binary representation with the key again:
     * 
     *  01000010 (encrypted H; living as a B)
     *  00001010 (key)
     *  ------XOR compare key against each bit------------
     *  01001000 (decrypted H; back to original)
     * 
     */

    // 'crypt' constructor for this interface accepting both string data and key as parameters
    public static String crypt(String data, int key) {
        // convert the input string to a byte array for easier processing
        byte[] bytes = data.getBytes();
        // initialize new byte array to hold the encrypted data; array size is dynamic based on number of tests entered
        byte[] encryptedBytes = new byte[bytes.length];
        // iterate through each input byte
        for (int i = 0; i < bytes.length; i++) {
            // use XOR encryption to encrypt each iterated byte
            encryptedBytes[i] = (byte) (bytes[i] ^ key);
        }
        // convert the byte back to a string and return it
        return new String(encryptedBytes);
    }
}
