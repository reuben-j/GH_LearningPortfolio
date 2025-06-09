import requests

search_url = "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/esearch.fcgi"

params = {
    "db": "pubmed",
    "term": "diabetes machine learning",  # your search query
    "retmode": "json",
    "retmax": 5  # number of articles to return
}

res = requests.get(search_url, params=params)
result_ids = res.json()["esearchresult"]["idlist"]
print("PubMed IDs:", result_ids)

fetch_url = "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/efetch.fcgi"

params = {
    "db": "pubmed",
    "id": ",".join(result_ids),
    "retmode": "xml"  # returns data in structured XML
}

res = requests.get(fetch_url, params=params)
xml_data = res.text

print(xml_data[:1000])  # Show a preview

import xml.etree.ElementTree as ET

root = ET.fromstring(xml_data)

for article in root.findall(".//PubmedArticle"):
    title = article.findtext(".//ArticleTitle")
    abstract = article.findtext(".//AbstractText")
    print(f"🔹 Title: {title}\n📝 Abstract: {abstract[:200]}...\n")
