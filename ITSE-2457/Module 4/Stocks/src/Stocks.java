/*
 * ITSE-2457; OOP Java; M/W 2pm
 * Written by Andrew Pettus
 * Feb 13 2023
 * Module 4 Lab 3
 * Stocks
 */
import java.text.NumberFormat;
public class Stocks {

    //variables
    private String companyTicker;
    private String companyName;
    private double totalShares;
    private double priceShares;
    
    //number format object
    NumberFormat dollFormat = NumberFormat.getCurrencyInstance();

    public Stocks(String pCompanyTicker, String pCompanyName, 
    double pTotalShares, double pPriceShares) {
        companyTicker = pCompanyTicker;
        companyName = pCompanyName;
        totalShares = pTotalShares;
        priceShares = pPriceShares;
    }

    public Stocks() {
        companyTicker = "Unknown Ticker";
        companyName = "Unknown Name";
        totalShares = -1;
        priceShares = -1;
    }
    //GetterSetters
    public String getCompanyTicker() {
        return companyTicker;
    }
    public void setCompanyTicker(String sCompanyTicker) {
        companyTicker = sCompanyTicker;
    }
    public String getCompanyName() {
        return companyName;
    }
    public void setCompanyName(String sCompanyName) {
        companyName = sCompanyName;
    }
    public double getTotalShares() {
        return totalShares;
    }
    public void setTotalShares(double sTotalShares) {
        totalShares = sTotalShares;
    }
    public double getPriceShares() {
        return priceShares;
    }
    public void setPriceShares(double sPriceShares) {
        priceShares = sPriceShares;
    }

    public double getPoisitonValue() {
        return (totalShares * priceShares);
    }

    public String getPositionSize(){
        String positionSize = "Default";
        if (getPoisitonValue() >= 5000){
            positionSize = "Large";
        }
        else if (getPoisitonValue() >= 2500){
            positionSize = "Medium";
        }
        else if (getPoisitonValue() < 2500){
            positionSize = "Small";
        }
        return (positionSize);
    }

    public String PrintInfo() {
        String myReturn = "";
        myReturn = "\nTicker: " 
                + getCompanyTicker() 
                + "\nCompany Name: " 
                + getCompanyName() 
                + "\nTotal Shares: " 
                + getTotalShares() 
                + "\nPrice Per Share: " 
                + dollFormat.format(getPriceShares())
                + "\nPosition Value: "
                + dollFormat.format(getPoisitonValue())
                + "\nPosition Size: "
                + getPositionSize();
        return myReturn;
    }
    }