package br.ufjf.scriptlets;

import net.sf.jasperreports.engine.*;
import net.sf.jasperreports.engine.JRScriptletException;

public class Scriptlets extends it.businesslogic.ireport.IReportScriptlet {

int i = 0;
int c = -5;
int k = -5;
int p = 0;
int n = 198;
int l = 0;
/** Creates a new instance of JRIreportDefaultScriptlet */
public Scriptlets() {
}

public Integer getMyCount2() throws  JRScriptletException
{
	int j;

	i++;
	if ((i > 12) && (i < 19))
	{
		l++;
		j = 66 - (p * 6) + c;
		if (l == j)
		{
		    return new Integer(193);
		}
		if (l == 67)
		{
		    l = 1;
			c++;
			if (c==1)
			{
				p++;
				c = -5;
			}
		}
	}
	if (i == 19)
	{
		i = 1;
	}
    return new Integer(l);
}


public String tirarAcento(String text) throws JRScriptletException
{
     return text.replaceAll("[�����]","a")  
                 .replaceAll("[����]","e")  
                 .replaceAll("[����]","i")  
                 .replaceAll("[�����]","o")  
                 .replaceAll("[����]","u")  
                 .replaceAll("[�����]","A")  
                 .replaceAll("[����]","E")  
                 .replaceAll("[����]","I")  
                 .replaceAll("[�����]","O")  
                 .replaceAll("[����]","U")  
                 .replace('�','c')  
                 .replace('�','C')  
                 .replace('�','n')  
                 .replace('�','N');  
}


/** Begin EVENT_AFTER_COLUMN_INIT This line is generated by iReport. Don't modify or move please! */
public void afterColumnInit() throws JRScriptletException
{
	super.beforeColumnInit();
}
/** End EVENT_AFTER_COLUMN_INIT This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_AFTER_DETAIL_EVAL This line is generated by iReport. Don't modify or move please! */
public void afterDetailEval() throws JRScriptletException
{
	super.afterDetailEval();
}
/** End EVENT_AFTER_DETAIL_EVAL This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_AFTER_GROUP_INIT This line is generated by iReport. Don't modify or move please! */
public void afterGroupInit(String groupName) throws JRScriptletException
{
	super.afterGroupInit(groupName);
}
/** End EVENT_AFTER_GROUP_INIT This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_AFTER_PAGE_INIT This line is generated by iReport. Don't modify or move please! */
public void afterPageInit() throws JRScriptletException
{
	super.afterPageInit();
}
/** End EVENT_AFTER_PAGE_INIT This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_AFTER_REPORT_INIT This line is generated by iReport. Don't modify or move please! */
public void afterReportInit() throws JRScriptletException
{
	
}
/** End EVENT_AFTER_REPORT_INIT This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_BEFORE_COLUMN_INIT This line is generated by iReport. Don't modify or move please! */
public void beforeColumnInit() throws JRScriptletException
{
		
}
/** End EVENT_BEFORE_COLUMN_INIT This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_BEFORE_DETAIL_EVAL This line is generated by iReport. Don't modify or move please! */
public void beforeDetailEval() throws JRScriptletException
{
	
}
/** end EVENT_BEFORE_DETAIL_EVAL Please don't touch or move this comment*/

/** End EVENT_BEFORE_DETAIL_EVAL This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_BEFORE_GROUP_INIT This line is generated by iReport. Don't modify or move please! */
public void beforeGroupInit(String groupName) throws JRScriptletException
{
	
}
/** End EVENT_BEFORE_GROUP_INIT This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_BEFORE_PAGE_INIT This line is generated by iReport. Don't modify or move please! */
public void beforePageInit() throws JRScriptletException
{
	
}
/** End EVENT_BEFORE_PAGE_INIT This line is generated by iReport. Don't modify or move please! */
/** Begin EVENT_BEFORE_REPORT_INIT This line is generated by iReport. Don't modify or move please! */
public void beforeReportInit() throws JRScriptletException
{
	
}

/** End EVENT_BEFORE_REPORT_INIT This line is generated by iReport. Don't modify or move please! */

}