class OfficeLocation {
    // Private instance variables
    private String officeName;
    private String address;
    private String city;
    private String state;
    private String zip;
    private String phone;

    // Constructor with no arguments
    public OfficeLocation() {
    }

    // Constructor with arguments
    public OfficeLocation(String officeName, String address, String city, String state, String zip, String phone) {
        this.officeName = officeName;
        this.address = address;
        this.city = city;
        this.state = state;
        this.zip = zip;
        this.phone = phone;
    }
    
    // gettersetters
    public String getOfficeName() {
        return officeName;
    }
    public void setOfficeName(String officeName) {
        this.officeName = officeName;
    }
    
    public String getAddress() {
        return address;
    }
    public void setAddress(String address) {
        this.address = address;
    }
    
    public String getCity() {
        return city;
    }
    public void setCity(String city) {
        this.city = city;
    }
    
    public String getState() {
        return state;
    }
    public void setState(String state) {
        this.state = state;
    }
    
    public String getZip() {
        return zip;
    }
    public void setZip(String zip) {
        this.zip = zip;
    }

    public String getPhone() {
        return phone;
    }
    public void setPhone(String phone) {
        this.phone = phone;
    }

    public void printInfo() {
        System.out.println(officeName);
        System.out.println(address);
        System.out.println(city + ", " + state + " " + zip);
        System.out.println(phone);
    }
}