public class Benefits {

    private String type;
    private float cost;
    private String provider;

    public Benefits(String type, float cost, String provider) {
        this.type = type;
        this.cost = cost;
        this.provider = provider;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public float getCost() {
        return cost;
    }

    public void setCost(float cost) {
        this.cost = cost;
    }

    public String getProvider() {
        return provider;
    }

    public void setProvider(String provider) {
        this.provider = provider;
    }

    public void PrintBenefitsInfo() {
        System.out.println("Benefit Type: " + getType());
        System.out.println("Benefit Cost: " + getCost());
        System.out.println("Benefit Provider: " + getProvider());
    }
}